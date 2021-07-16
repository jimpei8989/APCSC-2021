#include <iostream>

int main() {
    char c;
    std::cin >> c;

    if ('0' <= c  && c <= '9') {
        std::cout << c << std::endl;
    } else {
        std::cout << (c - 'A' + 10) << std::endl;
    }
}