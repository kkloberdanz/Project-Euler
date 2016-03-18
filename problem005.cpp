#include <iostream>
#include <cstdint>

int main() {
    // until j < 2^64 - 1
    for (uint64_t j = 20; j < 18446744073709551615; j++) {
        bool isDivisible = true;
        for (uint64_t i = 2; i <= 20; i++) {
            if (j % i != 0) {
                isDivisible = false;
            }
        }
        if (isDivisible) {
            std::cout << j << std::endl;
        }
    }
    return 0;
}
