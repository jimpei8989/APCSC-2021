#include <iostream>

// DO NOT INCLUDE <algorithm>

int max(int a, int b) { return a > b ? a : b; }

int max3(int a, int b, int c) { return max(max(a, b), c); }

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << max3(a, b, c) << std::endl;
}
