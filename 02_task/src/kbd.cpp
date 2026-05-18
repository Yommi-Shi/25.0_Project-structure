#include <iostream>
#include "kbd.h"
#include "ram.h"


void input() {
    int data[8];
    std::cout << "Enter 8 integers:";
    for (int i = 0; i < 8; ++i) {
        std::cin >> data[i];
    }
    write(data);
}
