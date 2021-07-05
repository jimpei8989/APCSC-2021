#include <iostream>
#include <cstring>

const int MAXN = 3e5;
char str[MAXN];

int main() {
    memset(str, '!', MAXN - 1);
    str[MAXN - 1] = '\0';

    std::cout << "Begin case 1" << std::endl;
    for (int i = 0; i < strlen(str); i++) {
        // do something
    }
    std::cout << "End case 1" << std::endl;

    std::cout << "Begin case 2" << std::endl;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        // do something
    }
    std::cout << "End case 2" << std::endl;
}