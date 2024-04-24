#pragma once

#include <fstream>
#include <print>

namespace cppfs 
{

// todo:
// 1. read raw file system : C:\
// 2. parse mft entries
// 3. do dirlist
// 4. refactor

void work() 
{
    std::fstream c_drive;
    c_drive.open(R"(c:\)");

    std::string data;
    data.resize(1000);
    c_drive.read(data.data(), data.size());
    int count = 0;
    for (char d : data) {
        if (count == 16) {
            std::println("");
        }
        count++;
        std::print("0x{:x} ", d);
    }

    c_drive.close();
}

int test() {
    return 42;
}

}

