#include <iostream>
#include <cstring>

int main() {
    char str[100];
    std::cin >> str;

    // Part 1 - my_strlen
    int len = 0;
    for (int i = 0; i < 100 && str[i] != '\0'; i++) {
        len += 1;
    }
    std::cout << "My strlen: " << len << std::endl;

    // Part 2 - strlen in cstring
    std::cout << "cstring strlen: " << strlen(str) << std::endl;
}