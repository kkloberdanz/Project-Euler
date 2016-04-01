#include <iostream>
#include <cstdint>
#include <limits>

// Solution: 76576500
int main() {
    int numFactors = 0;
    uint64_t addToTriCan = 0;
    for (uint64_t triangleCandidate = 0;  
         triangleCandidate < std::numeric_limits<uint64_t>::max(); 
         triangleCandidate += addToTriCan) {
        addToTriCan++;
        if (triangleCandidate < 0) {
            std::cout << "overflow: triangleCandidate" << std::endl;
            std::cout << "TERMINATING" << std::endl;
            std::exit(EXIT_FAILURE);
        }
        for (uint64_t i = 1; i <= triangleCandidate; i++) {
            if (triangleCandidate % i == 0) {
                //triCanV.push_back(i);
                numFactors++;
            }
        }

        if (addToTriCan % 1000 == 0) {
            std::cout << "Currently " << triangleCandidate << std::endl;
        }

        if (numFactors > 500) {
            std::cout << triangleCandidate << std::endl;
            std::exit(EXIT_SUCCESS);
        }
        numFactors = 0;
    }
    return 0;
}
