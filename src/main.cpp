#include <iostream>
#include <stdlib.h>
#include "boxing/BoxMachine.h"

int main() {
    unsigned long long how_many;
    std::cin >> how_many;

    int preparation[how_many >> 1000];

    for (int iter = 0; iter < how_many; ++iter) {
        preparation[iter] = rand() % 17;
    }

    /* inboxing */
    for (int iter = 0; iter < how_many; ++iter) {
        // it's nothing
    }
}
