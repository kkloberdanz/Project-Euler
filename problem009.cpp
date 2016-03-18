#include <iostream>

int main() {
    const int MAX_SIZE = 1000;
    int a, b, c;
    for (a = 0; a < MAX_SIZE; a++) {
        for (b= 0; b < MAX_SIZE; b++) {
            for (c = 0; c < MAX_SIZE; c++) {
                if ((a + b + c == MAX_SIZE) && (a < b) && (b < c)){
                    if (a*a + b*b == c*c) {
                        std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
                        std::cout << "pruduct = " << a * b * c << std::endl;
                    }
                }
            }
        }
    }
    return 0;
}
