#pragma once
#include <regex>
#include <sys/stat.h>
#include <errno.h>
#include <string>
#include <fstream>
#include <json/value.h>
#include <json/json.h>
#include "Encryption.h"

using namespace std;

inline bool exists_test(const std::string& name) {
    //test if given file exists
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

inline bool password_not_valid(const std::string password) {
    //checks if there is upper and lower case, number; specifies allowed characters; sets minimum to 8 characters
    std::regex regex_password ("^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])[A-Za-z0-9@$!%*?&]{8,}$");
    return !std::regex_match(password, regex_password);
}

inline bool username_not_valid(const std::string word) {
    //specifies allowed characters for an username
    std::regex regex ("^[A-Za-z0-9@$!%*?&]{1,}$");
    return !std::regex_match(word, regex);
}

inline Json::Value json_parse(std::string stringUser, String^ password) {
    string userFile = "Data/" + stringUser + ".json";
    String^ StringUserFile = gcnew String(userFile.c_str());
    Json::Value actualJson;
    Json::Reader reader;

    try {
        if (exists_test("Data/data.json")) {
            remove("Data/data.json");
        }

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

inline void json_write(std::string stringUser, Json::Value actualJson, String^ password) {
    string userFile = "Data/" + stringUser + ".json";
    String^ StringUserFile = gcnew String(userFile.c_str());

    try {
        if (exists_test("Data/data.json")) {
            remove("Data/data.json");
        }

        //writing json data into a file
        ofstream outfile("Data/data.json");
        Json::FastWriter fastWriter;
        outfile << fastWriter.write(actualJson);
        outfile.close();

        if (exists_test(userFile.c_str())) {
            remove(userFile.c_str());
        }
        encryptFile(StringUserFile, password);
    }
    finally {
        if (exists_test("Data/data.json")) {
            remove("Data/data.json");
        }
    }

    return;
}

inline int find_index_in_content(Json::Value actualJson, std::string cat) {
    //finding the index of selected category in the content array
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
