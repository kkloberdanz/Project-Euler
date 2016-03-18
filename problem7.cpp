#include <iostream>
#include <cmath>

int main() {
    int numPrimes = 0;
    bool isPrime;
    for (int candidate = 2; numPrimes <= 10001; candidate++) {
        isPrime = true;

        for (int j = 2; j < (int)std::sqrt(candidate) + 1; j++) {
           if ((candidate % j == 0) && (j != candidate)) {
                isPrime = false;
            }
        }

        if (isPrime) {
            numPrimes++;

            switch (numPrimes) {
                case 1:
                    std::cout << "1st prime = " << candidate << std::endl;
                    break;

                case 2:
                    std::cout << "2nd prime = " << candidate << std::endl;
                    break;

                case 3:
                    std::cout << "3rd prime = " << candidate << std::endl;
                    break;

                case 4:
                    std::cout << "4th prime = " << candidate << std::endl;
                    break;

                case 5:
                    std::cout << "5th prime = " << candidate << std::endl;
                    break;

                case 6:
                    std::cout << "6th prime = " << candidate << std::endl;
                    break;

                case 10001:
                    std::cout << "10001st prime = " << candidate << std::endl;
                    break;
            }
        }
    }
    return 0;
}
