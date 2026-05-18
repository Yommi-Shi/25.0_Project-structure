#include <iostream>
#include "gpu.h"
#include "ram.h"


void display() {
    int out[8];
    read(out);
    for (int i = 0; i < 8; ++i) {
        std::cout << out[i] << " ";
    }
    std::cout << std::endl;
}
