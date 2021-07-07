#include <cstring>
#include <iostream>

int main() {
    char str1[1000] = {}, str2[1000] = {}, input[100];

    int offset = 0;

    for (int i = 0; i < 5; i++) {
        std::cout << "Round " << i << ": ";
        std::cin >> input;

        strcat(str1, input);

        strcpy(str2 + offset, input);
        offset += strlen(input);

        std::cout << "str1: " << str1 << std::endl;
        std::cout << "str2: " << str2 << std::endl;
    }
}