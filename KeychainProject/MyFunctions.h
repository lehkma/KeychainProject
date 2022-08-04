#pragma once
#include <sys/stat.h>
#include <errno.h>
#include <string>
#include <fstream>

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