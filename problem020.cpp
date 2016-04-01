#include <iostream>

template <typename T>
T factorial(T a) {
    return ((a == 0) || (a == 1)) ? (1) : (a * factorial(a-1));
}

int main() {
    uint64_t num = 30;
    std::cout << "factorial(" << num << ") = "  << factorial(num) << std::endl;
    return 0;
}
