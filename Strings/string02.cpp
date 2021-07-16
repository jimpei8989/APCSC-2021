#include <iostream>
#include <cstring>

char str[100010];

int main() {
    std::cin >> str;
    int N = strlen(str);

    bool is_palin = true;
    for (int i = 0; i < N / 2 && is_palin; i++) {
        if (str[i] != str[N - i - 1])
            is_palin = false;
    }

    if (is_palin) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}