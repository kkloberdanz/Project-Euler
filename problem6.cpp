#include <iostream>
#include <cstdint>

int main() {
    uint64_t sumOfSquares = 0;
    uint64_t squareOfSum = 0;
    for (int i = 0; i <= 100; i++) {
        sumOfSquares += i*i;
        squareOfSum += i;
    }
    squareOfSum = squareOfSum * squareOfSum;

    std::cout << squareOfSum - sumOfSquares << std::endl;
    return 0;
}
