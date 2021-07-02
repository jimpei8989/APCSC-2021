#include <iostream>

int main() {
    int arr1[5];
    std::cout << "arr1:\t";
    for (int i = 0; i < 5; i++) std::cout << arr1[i] << " ";
    std::cout << std::endl;

    int arr2_1[5] = {1, 2, 3, 4, 5};
    std::cout << "arr2_1:\t";
    for (int i = 0; i < 5; i++) std::cout << arr2_1[i] << " ";
    std::cout << std::endl;

    int arr2_2[5] = {1, 2, 3};
    std::cout << "arr2_2:\t";
    for (int i = 0; i < 5; i++) std::cout << arr2_2[i] << " ";
    std::cout << std::endl;

    int arr2_3[5] = {};
    std::cout << "arr2_3:\t";
    for (int i = 0; i < 5; i++) std::cout << arr2_3[i] << " ";
    std::cout << std::endl;

    int arr3[] = {1, 2, 3, 4, 5};
    std::cout << "arr3:\t";
    for (int i = 0; i < 5; i++) std::cout << arr3[i] << " ";
    std::cout << std::endl;
}
