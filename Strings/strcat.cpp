#include <cstring>
#include <iostream>

int main() {
    char a[100], b[100];
    std::cin >> a >> b;

    char c[100] = {};
    strcat(c, a);
    std::cout << "strcat(c, a): " << a << ", " << b << ", " << c << std::endl;

    strcat(c, b);
    std::cout << "strcat(c, b): " << a << ", " << b << ", " << c << std::endl;

    strncat(c, a, 3);
    std::cout << "strncat(c, a, 3): " << a << ", " << b << ", " << c << std::endl;

    strncat(c, b, 3);
    std::cout << "strncat(c, b, 3): " << a << ", " << b << ", " << c << std::endl;
}
