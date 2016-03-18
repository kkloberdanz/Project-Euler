#include <iostream>
#include <cmath>
#include <vector>

int main() {
    long long num = 600851475143; 

    std::vector<long long> factors;

    long long greatestFactor = 1;
    long long d = 2;
    while (num > 1) {
        while (num % d == 0) {
            factors.push_back(d);
            if (d > greatestFactor) {
                greatestFactor = d;
            }
            num = num / d;
        }
        d++;
    }

    for (int i = 0; i < factors.size(); i++) { 
        std::cout << factors[i] << std::endl;
    }

    std::cout << "Greatest Factor: " << greatestFactor << std::endl;

    return 0;
}
