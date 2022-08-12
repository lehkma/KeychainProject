#pragma once
#include <regex>
#include <sys/stat.h>
#include <errno.h>
#include <string>
#include <fstream>

using namespace std;

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

inline bool password_not_valid(const std::string password) {
    std::regex regex_password ("^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])[A-Za-z0-9@$!%*?&]{8,}$");
    return !std::regex_match(password, regex_password);
}

inline bool username_not_valid(const std::string word) {
    std::regex regex ("^[A-Za-z0-9@$!%*?&]{1,}$");
    return !std::regex_match(word, regex);
}
