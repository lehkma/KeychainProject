#pragma once
#include <sys/stat.h>
#include <string>
#include <fstream>

using namespace std;

inline bool exists_test(const std::string& name) {
    if (FILE* file = fopen(name.c_str(), "r")) {
        fclose(file);
        return true;
    }
    else {
        return false;
    }
}