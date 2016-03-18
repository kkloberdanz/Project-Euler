#include <iostream>
#include <cstdint>

int main() {
    int numFactors = 0;
    uint64_t addToTriCan = 0;
    //const uint64_t MAX_UINT64_T = 18446744073709551616; // largest number represented by 64 bits
    //for (uint64_t triangleCandidate = 0; triangleCandidate < MAX_UINT64_T; triangleCandidate++) {
    for (uint64_t triangleCandidate = 0; true; triangleCandidate += addToTriCan) {
        addToTriCan++;
        if (triangleCandidate < 0) {
            std::cout << "integer overflow: triangleCandidate" << std::endl;
            std::cout << "TERMINATING" << std::endl;
            std::exit(EXIT_FAILURE);
        }
        for (uint64_t i = 1; i <= triangleCandidate; i++) {
            if (triangleCandidate % i == 0) {
                //triCanV.push_back(i);
                numFactors++;
            }
        }

        if (numFactors > 500) {
            std::cout << triangleCandidate << std::endl;
            std::exit(EXIT_SUCCESS);
        }
        numFactors = 0;
    }
    return 0;
}
