#include "ram.h"


int buffer[8] = {0};

void write(int data[8]) {
    for (int i = 0; i < 8; ++i) {
        buffer[i] = data[i];
    }
}

void read(int out[8]) {
    for (int i = 0; i < 8; ++i) {
        out[i] = buffer[i];
    }
}