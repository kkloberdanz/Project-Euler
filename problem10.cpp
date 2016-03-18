#include <iostream>
#include <cstdint>
#include <cmath>

int main() {
    const uint64_t MAX_LOOP = 2000000;
    uint64_t sum = 0;
    bool isPrime = true;
    uint64_t squareRoot;
    uint64_t i, primeCandidate;

    for (primeCandidate = 2; primeCandidate < MAX_LOOP; primeCandidate++) {
        isPrime = true;
        for (i = 2; i < 1+std::sqrt(primeCandidate); i++) {
            if ((primeCandidate > 2) && (primeCandidate % i == 0)) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            //std::cout << primeCandidate << " is prime" << std::endl;
            sum += primeCandidate;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
