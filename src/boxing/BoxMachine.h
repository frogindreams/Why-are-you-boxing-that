#include <vector>
#include <iostream>

#ifndef BOXMACHINE_H
#define BOXMACHINE_H

const auto size_from_task = 18;
std::vector<int> vain_sequence(size_from_task, 0);

void packSequence(std::vector<int> cut_seq, int size_of_seq) {
    for (auto it_cut = 0; it_cut < (size_of_seq - 1); ++it_cut) {
        ++vain_sequence[cut_seq[it_cut]];
    }

    std::cout << "origin: ";

    for ( auto comp : cut_seq ) {
        std::cout << comp << " ";
    }

    std::cout << "(size: " << size_of_seq << ")";
    std::cout << '\n';
    std::cout << "packed: ";

    for ( auto comp : vain_sequence ) {
        std::cout << comp << " ";
    } std::cout << '\n';
}

#endif
