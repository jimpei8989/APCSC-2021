#include <iostream>

int main() {
    int a = 2, b = 3, c = 5;
    int arr[100];

    std::cout << "&a:\t\t" << &a << std::endl;
    std::cout << "&b:\t\t" << &b << std::endl;
    std::cout << "&c:\t\t" << &c << std::endl;

    std::cout << "arr:\t\t" << arr << std::endl;
    std::cout << "&arr[0]:\t" << &arr[0] << std::endl;
    std::cout << "&arr[29]:\t" << &arr[29] << std::endl;
}
