#include <iostream>
//#include <cmath>
#include <cstdint>

template <typename T>
T d(T num) {
    T total = 0;
    for (T i = 1; i < num; i++) {
        if (num % i == 0) {
            total += i;
        }
    }
    return total;
}

template <typename T>
bool is_amicable_pair(T a, T b) {
    return (d(a) == d(b));
}

int main() {
    uint64_t i, j, total = 0;

    for (i = 0; i < 10000; i++) {
        for (j = 0; j < 10000; j++) {
            if (is_amicable_pair(i, j)) {
                total = total + i + j;
            }
        }
    }

    std::cout << "total = " << total << std::endl;
    return 0;
}
