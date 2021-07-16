#include <iostream>

int main() {
    char str1[10];
    char str2_1[10] = "abcd";
    char str2_2[10] = {'a', 'b', 'c', 'd'};
    char str3_1[] = "abcd";
    char str3_2[] = {'a', 'b', 'c', 'd'};

    std::cout << "str1:\t" << str1 << " | ";
    for (int i = 0; i < 10; i++) std::cout << (int)str1[i] << " ";
    std::cout << std::endl;

    std::cout << "str2_1:\t" << str2_1 << " | ";
    for (int i = 0; i < 10; i++) std::cout << (int)str2_1[i] << " ";
    std::cout << std::endl;

    std::cout << "str2_2:\t" << str2_2 << " | ";
    for (int i = 0; i < 10; i++) std::cout << (int)str2_2[i] << " ";
    std::cout << std::endl;

    std::cout << "str3_1:\t" << str3_1 << " | ";
    for (int i = 0; i < 10; i++) std::cout << (int)str3_1[i] << " ";
    std::cout << std::endl;

    std::cout << "str3_2:\t" << str3_2 << " | ";
    for (int i = 0; i < 10; i++) std::cout << (int)str3_2[i] << " ";
    std::cout << std::endl;
}