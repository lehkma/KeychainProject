#pragma once
#include <msclr\marshal_cppstd.h>
#include <regex>
#include <sys/stat.h>
#include <errno.h>
#include <string>
#include <fstream>
#include <json/value.h>
#include <json/json.h>
#include "Encryption.h"
#include <locale>
#include <codecvt>

using namespace std;

//test if given file exists
inline bool exists_test(const std::string& name) {
    FILE* file;
    errno_t err;
    if (err = fopen_s(&file ,name.c_str(), "r") != 0){
        return false;
    }
    else {
        fclose(file);
        return true;
    }
}

//checks if there is upper and lower case, number; specifies allowed characters; sets minimum to 8 characters
inline bool password_not_valid(const std::string password) {
    std::regex regex_password ("^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])[A-Za-z0-9@$!%*?&]{8,}$");
    return !std::regex_match(password, regex_password);
}

//specifies allowed characters for an username
inline bool username_not_valid(const std::string word) {
    std::regex regex ("^[A-Za-z0-9@$!%*?&]{1,}$");
    return !std::regex_match(word, regex);
}

//decrypts data from Data/stringUser.json, places them in a buffer file, creates json object, deletes buffer file
inline Json::Value json_parse(std::string stringUser, String^ password) {
    string userFile = "Data/" + stringUser + ".json";
    String^ StringUserFile = gcnew String(userFile.c_str());
    Json::Value actualJson;
    Json::Reader reader;

    if (exists_test("Data/data.json")) {
        remove("Data/data.json");
    }

    try {
        decryptFile(StringUserFile, password);

        //reads data from a file and creates json object
        ifstream ifile("Data/data.json");
        reader.parse(ifile, actualJson);
        ifile.close();

        remove(userFile.c_str());
        encryptFile(StringUserFile, password);
    }
    finally {
        if (exists_test("Data/data.json")) {
            remove("Data/data.json");
        }
    }

    return actualJson;
}

//writes json object into a buffer file, that is then encrypted to the Data/stringUser.json file
inline void json_write(std::string stringUser, Json::Value actualJson, String^ password) {
    string userFile = "Data/" + stringUser + ".json";
    String^ StringUserFile = gcnew String(userFile.c_str());

    if (exists_test("Data/data.json")) {
        remove("Data/data.json");
    }

    //writing json data into a file
    ofstream outfile("Data/data.json");
    Json::FastWriter fastWriter;
    outfile << fastWriter.write(actualJson);
    outfile.close();
    actualJson.clear();

    try {
        remove(userFile.c_str());
        encryptFile(StringUserFile, password);
    }
    finally {
        if (exists_test("Data/data.json")) {
            remove("Data/data.json");
        }
    }

    return;
}

//creates object of pairs of all registered users
inline Json::Value users_json_parse() {
    ifstream ifile("Data/KeychainUsersList.json");
    Json::Value usersJson;
    Json::Reader reader1;
    reader1.parse(ifile, usersJson);
    ifile.close();
    return usersJson;
}

//saves the object of all registered users to its file
inline void users_json_write(Json::Value usersJson) {
    ofstream outfile("Data/KeychainUsersList.json");
    Json::FastWriter fastWriter;
    outfile << fastWriter.write(usersJson);
    outfile.close();
    usersJson.clear();
    return;
}

//finding the index of selected category in the content array
inline int find_index_in_content(Json::Value actualJson, std::string cat) {
    int cat_index = 0;
    bool notFound = true;
    while (actualJson["content"][cat_index][0] && notFound) {
        if (actualJson["content"][cat_index][0] == cat) {
            notFound = false;
        }
        else {
            cat_index += 1;
        }
    }
    return cat_index;
}

//converts System String^ to std::string through std::wstring
inline std::string sysStringToString(String^ sysStr) {
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    wstring wstr = msclr::interop::marshal_as<std::wstring>(sysStr);
    string str = converter.to_bytes(wstr);
    return str;
}

//converts std::string to System String^ through std::wstring
inline String^ stdStrToSysStr(std::string str) {
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::wstring wstr = converter.from_bytes(str);
    String^ sysStr = gcnew String(wstr.c_str());
    return sysStr;
}