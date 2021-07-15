#include <iostream>

int main() {
    int arr[5] = {1, 2, 3};
    std::cout << arr[0] << " " << arr[1] << " " << arr[2] << std::endl;

    arr[2] = 7;
    std::cout << arr[0] << " " << arr[1] << " " << arr[2] << " is god <(_ _)>"
              << std::endl;
}