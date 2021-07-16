#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::cout << "Before\tn = " << n << ", m = " << m << std::endl;

    if (n % 2 == 0) {
        int n = 3 * m + 1;
        std::cout << "In if,\tn = " << n << ", m = " << m << std::endl;
    } else {
        int m = 3 * n + 1;
        std::cout << "In else,\tn = " << n << ", m = " << m << std::endl;
    }

    std::cout << "After\tn = " << n << ", m = " << m << std::endl;
}
