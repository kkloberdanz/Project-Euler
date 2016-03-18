#include <iostream>
#include <string>

int main() {
    std::string numAsString;
    bool isPalindrom;
    int num;
    int greatestNum;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            isPalindrom = true;
            numAsString = std::to_string(i*j);

            for (int x = 0; x <= numAsString.size() / 2; x++) {
                if (numAsString[x] != numAsString[numAsString.size() - x - 1]) {
                    isPalindrom = false;
                }
            }

            if (isPalindrom) {
                num = std::stoi(numAsString);
                if (greatestNum < num) {
                    greatestNum = num;
                }
                std::cout << numAsString << std::endl;
            }
        }
    }
    std::cout << "Greatest Palindrome: " << greatestNum << std::endl;
    return 0;
}
