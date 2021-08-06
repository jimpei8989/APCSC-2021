#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int fib[100] = {0, 1};
    for (int i = 2; i <= 99; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 1; i <= N; i++) {
        std::cout << fib[i] << (i == N ? "\n" : " ");
    }
}
