#include <cstdlib>
#include <iostream>

int main() {
    int x = rand();
    std::cout << x << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << rand() << std::endl;
    }
}