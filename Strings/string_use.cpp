#include <iostream>

int main() {
    char str[100];
    std::cin >> str;
    std::cout << str << std::endl;;

    str[1] = 'a';
    std::cout << str << std::endl;;
}