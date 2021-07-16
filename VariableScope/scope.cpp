#include <iostream>

int a = 3;

int main() {
    std::cout << "Global: a = " << a << std::endl;

    int a = 4;
    std::cout << "Local: a = " << a << std::endl;

    {
        int a = 5;
        std::cout << "Local2: a = " << a << std::endl;
    }
}