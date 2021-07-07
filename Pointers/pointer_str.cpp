#include <iostream>
#include <cstring>

int main() {
    char str[100] = "Hello APCS Camp!";

    std::cout << "str + 6: " << str + 6 << std::endl;

    std::cout << "strlen(str + 6): " << strlen(str + 6) << std::endl;

    strncpy(str + 6, "APES", 4);
    std::cout << "strncpy: " << str << std::endl;
}
