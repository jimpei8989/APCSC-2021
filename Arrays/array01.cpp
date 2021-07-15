#include <iostream>

int main() {
    int fib[31] = {0, 1};
    for (int i = 2; i <= 30; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 1; i <= 30; i++) {
        std::cout << fib[i] << (i == 30 ? "\n" : " ");
    }
}