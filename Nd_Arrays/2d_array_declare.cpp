#include <iostream>

int main() {
    int arr1[3][3];

    int arr2_1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2_2[3][3] = {{1, 2, 3}, {4, 5, 6}};
    int arr2_3[3][3] = {{1, 2}, {3, 4}};
    int arr2_4[3][3] = {};

    int arr3[][3] = {{1, 2, 3}, {4, 5}, {6}};

    std::cout << "arr1:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) std::cout << arr1[i][j] << " ";
        std::cout << std::endl;
    }

    std::cout << "arr2_1:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) std::cout << arr2_1[i][j] << " ";
        std::cout << std::endl;
    }

    std::cout << "arr2_2:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) std::cout << arr2_2[i][j] << " ";
        std::cout << std::endl;
    }

    std::cout << "arr2_3:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) std::cout << arr2_3[i][j] << " ";
        std::cout << std::endl;
    }

    std::cout << "arr2_4:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) std::cout << arr2_4[i][j] << " ";
        std::cout << std::endl;
    }

    std::cout << "arr3:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) std::cout << arr3[i][j] << " ";
        std::cout << std::endl;
    }
}
