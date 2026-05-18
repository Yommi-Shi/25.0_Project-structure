#include <iostream>
#include <fstream>
#include "disk.h"
#include "ram.h"


void save() {
    std::ofstream ofs("data.txt");
    for (int i = 0; i < 8; ++i) {
        ofs << buffer[i] << " ";
    }

    ofs.close();
}


void load() {
    std::ifstream ifs("data.txt");
    if (!ifs) {
        std::cerr << "File not found!" << std::endl;
        return;
    }

    for (int i = 0; i < 8; ++i) {
        ifs >> buffer[i];
    }

    ifs.close();
}