#include <algorithm>
#include <iostream>

void bad_swap(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void good_swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 3, b = 5;

    std::cout << "a = " << a << ", b = " << b << std::endl;

    int tmp = a;
    a = b;
    b = tmp;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    a ^= b ^= a ^= b;  // Magic, don't ask
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    bad_swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    good_swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
}