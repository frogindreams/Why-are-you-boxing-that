#include <iostream>
#include <algorithm>
#include <vector>
#include "boxing/BoxMachine.h"

int main() {
    int useless_n;
    int size_of_seq;
    std::cin >> useless_n;
    size_of_seq = useless_n >> 1000;
    int sequence[size_of_seq];

    for (int iterX = 0; iterX < (size_of_seq - 1); ++iterX) {
        sequence[iterX] = rand() % 18;
    }
    std::vector<int> cut_quickly( sequence, sequence + (size_of_seq - 1) );
    std::sort(cut_quickly.begin(), cut_quickly.end());

    packSequence(cut_quickly, size_of_seq);
}
