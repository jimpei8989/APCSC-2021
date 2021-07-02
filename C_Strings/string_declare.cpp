#include <iostream>

int main() {
    char str1[10];
    char str2_1[10] = "abcd";
    char str2_2[100] = {'a', 'b', 'c', 'd'};
    char str3[] = "abcd";

    std::cout << "str1:\t" << str1 << " | ";
    for (int i = 0; i < 10; i++) std::cout << (int)str1[i] << " ";
    std::cout << std::endl;

    std::cout << "str2_1:\t" << str2_1 << " | ";
    for (int i = 0; i < 10; i++) std::cout << (int)str2_1[i] << " ";
    std::cout << std::endl;

    std::cout << "str2_2:\t" << str2_2 << " | ";
    for (int i = 0; i < 10; i++) std::cout << (int)str2_2[i] << " ";
    std::cout << std::endl;

    std::cout << "str3:\t" << str3 << " | ";
    for (int i = 0; i < 10; i++) std::cout << (int)str3[i] << " ";
    std::cout << std::endl;
}