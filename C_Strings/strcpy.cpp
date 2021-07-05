#include <cstring>
#include <iostream>

int main() {
    char a[100], b[100];
    std::cin >> a >> b;

    char c[100];
    strcpy(c, a);
    std::cout << "strcpy(c, a): " << a << ", " << b << ", " << c << std::endl;

    strcpy(c, b);
    std::cout << "strcpy(c, b): " << a << ", " << b << ", " << c << std::endl;

    strncpy(c, a, 3);
    std::cout << "strncpy(c, a, 3): " << a << ", " << b << ", " << c << std::endl;

    strncpy(c, b, 3);
    std::cout << "strncpy(c, b, 3): " << a << ", " << b << ", " << c << std::endl;
}
