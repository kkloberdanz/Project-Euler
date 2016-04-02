#include <iostream>

int main() {
    long long fib1 = 1;
    long long fib2 = 1;
    long long tmp;
    long long sum = 0;
    //for (long long i = 0; i < 4000000; i++) {
    while (fib1 < 4000000) {
        tmp = fib2;
        fib2 = fib1 + fib2;
        fib1 = tmp;
        //std::cout << "fib1 = " << fib1 << std::endl;
        if (fib1 % 2 == 0) {
            sum += fib1;
        }
    }
    std::cout << "Sum = " << sum << std::endl;
    return 0;
}
