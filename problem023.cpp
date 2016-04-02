#include <iostream>
#include <vector>
#include <cstdint>

template <typename T>
class Abundant {
    private:
        std::vector<T> abundant_V;
    public:
        std::vector<T> get_abundant_V() { return abundant_V; }
        bool is_abundant_num(T);
        void find_abundant_nums(T, T);
        void print_abundant_nums();
        bool is_sum_of_abundant_nums(T);
};

template <typename T>
bool Abundant<T>::is_abundant_num(T num) {
    if (num <= 0) { return false; }
    T total = 0;
    for (T i = 1; i < 1+(num/2); i++) {
        if (num % i == 0) {
            total += i;
        }
    }
    return (total > num);
}

template <typename T>
void Abundant<T>::find_abundant_nums(T lower_bound, T upper_bound) {
    for (T i = lower_bound; i <= upper_bound; i++) {
        if (is_abundant_num(i)) {
            abundant_V.push_back(i);
        }
    }
}

template <typename T>
void Abundant<T>::print_abundant_nums() {
    for (T i = 0; i < this->abundant_V.size(); i++) {
        std::cout << this->abundant_V[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
bool Abundant<T>::is_sum_of_abundant_nums(T num) {
    for (uint64_t i = 0; num < this->abundant_V[i]; i++) {
        for (uint64_t j = 0; num < this->abundant_V[j]; j++) {
            if (j + i == num) {
                std::cout << "j = " << j << " i = " << i << " num = " << num << std::endl;
                return true;
            }
        }
    }
    std::cout << num << std::endl;
    return false;
}

int main() {
    const int MAX_LIM = 28124;
    Abundant<uint64_t> a;
    a.find_abundant_nums(12, MAX_LIM);
    //a.print_abundant_nums();
    /*
    for (int i = 0; i < 100; i++) {
        if (a.is_abundant_num(i)) {
            std::cout << i << std::endl;
        }
    }
    */

    // pick a number, and check if it can be written by
    // the sum of two numbers from the abundant vector
    uint64_t total = 0;
    for (uint64_t j = 0; j < MAX_LIM + 2; j++) {
        if (a.is_sum_of_abundant_nums(j)) {
            std::cout << j << std::endl;
            total += j;
        }
    }
    std::cout << total << std::endl;
    return 0;
}
