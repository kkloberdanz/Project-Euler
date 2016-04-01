#include <iostream>
#include <algorithm>
#include <string>
#include "names.h"

int main() {

    std::sort(names.begin(), names.end());

    uint64_t total = 0;
    uint64_t nameScore = 0;

    // loop through names vector
    for (uint64_t i = 0; i < names.size(); i++) {
        // loop through each name
        for (uint64_t j = 0; j < names[i].length(); j++) {
            nameScore = nameScore + (names[i][j] - 'A' + 1);
        }
        nameScore = nameScore * (i+1);
        total += nameScore;
        nameScore = 0;
    }
    std::cout << total << std::endl;

    return 0;
}
