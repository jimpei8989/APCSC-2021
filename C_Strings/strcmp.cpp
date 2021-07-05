#include <cstring>
#include <iostream>

int main() {
    char a[100], b[100];
    std::cin >> a >> b;

    int n = strlen(a), m = strlen(b), cmp = 0;
    for (int i = 0; i < (n > m ? n : m) && cmp == 0; i++) {
        if (a[i] < b[i]) {
            cmp = -1;
        } else if (a[i] > b[i]) {
            cmp = 1;
        }
    }
    std::cout << "My strcmp: " << cmp << std::endl;

    std::cout << "cstring strcmp: " << strcmp(a, b) << std::endl;

    std::cout << "cstring strncmp (n = 5): " << strncmp(a, b, 5) << std::endl;
}