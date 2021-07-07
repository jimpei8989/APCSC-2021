#include <iostream>

int main() {
    int a = 2, b = 3, c = 5;
    int arr[100];

    std::cout << "&a:\t\t" << static_cast<void*>(&a) << std::endl;
    std::cout << "&b:\t\t" << static_cast<void*>(&b) << std::endl;
    std::cout << "&c:\t\t" << static_cast<void*>(&c) << std::endl;

    std::cout << "arr:\t\t" << static_cast<void*>(arr) << std::endl;
    std::cout << "&arr[0]:\t" << static_cast<void*>(&arr[0]) << std::endl;
    std::cout << "&arr[29]:\t" << static_cast<void*>(&arr[29]) << std::endl;
}
