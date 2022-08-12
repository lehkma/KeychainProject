#pragma once
#include <regex>
#include <sys/stat.h>
#include <errno.h>
#include <string>
#include <fstream>
#include <json/value.h>
#include <json/json.h>

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

inline Json::Value json_parse(std::string stringUser) {
    //reads data from a file and creates json object
    ifstream ifile("Data/" + stringUser + ".json");
    Json::Value actualJson;
    Json::Reader reader;
    reader.parse(ifile, actualJson);
    ifile.close();
    return actualJson;
}
