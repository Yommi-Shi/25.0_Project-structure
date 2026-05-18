#include <iostream>
#include <string>
#include "kbd.h"
#include "gpu.h"
#include "cpu.h"
#include "disk.h"


int main() {
    std::cout << "Computer simulator project" << std::endl;

    std::string cmd;

    while (true) {
        std::cout << "Enter command (sum, save, load, input, display, exit):" << std::endl;
        std::cout << "->";
        std::cin >> cmd;

        if (cmd == "sum") {
            compute();
        } else if (cmd == "save") {
            save();
            std::cout << "Saved" << std::endl;
        } else if (cmd == "load") {
            load();
            std::cout << "Loaded" << std::endl;
        } else if (cmd == "input") {
            input();
        } else if (cmd == "display") {
            display();
        } else if (cmd == "exit") {
            break;
        } else {
            std::cout << "Unknown command." << std::endl;
        }
    }
}
