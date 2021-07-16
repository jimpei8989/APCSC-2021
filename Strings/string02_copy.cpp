#include <iostream>
#include <cstring>

char str1[100010];
char str2[100010];

int main() {
    std::cin >> str1;
    int N = strlen(str1);

    for (int i = 0; i < N; i++) {
        str2[i] = str1[N - i - 1];
    }

    bool is_palin = true;
    for (int i = 0; i < N && is_palin; i++) {
        if (str1[i] != str2[i])
            is_palin = false;
    }


    if (is_palin) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}