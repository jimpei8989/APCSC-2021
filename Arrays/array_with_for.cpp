#include <iostream>

int main() {
    int arr[100];
    for (int i = 0; i < 100; i++)
        arr[i] = i * i;

    for (int i = 0; i < 100; i++)
        std::cout << arr[i] <<  " ";
    std::cout << std::endl;
}