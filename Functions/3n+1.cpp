#include <iostream>

int f(int n);

int main() {
    int n;
    std::cin >> n;

    // 1) directly output
    std::cout << "f(n) = " << f(n) << std::endl;

    // 2) store into a variable
    int x = f(n);
    std::cout << "x = " << x << std::endl;

    // 3) call it without catching it
    f(n);
}

int f(int n) { return n % 2 ? 3 * n + 1 : n / 2; }