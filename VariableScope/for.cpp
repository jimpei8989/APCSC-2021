#include <iostream>

int main() {
    int n = 10;
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < n; i++) std::cout << i * i << " ";
        std::cout << std::endl;
    }
}
