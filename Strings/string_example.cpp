#include <iostream>

int main() {
    int N;
    char str[101];

    std::cin >> N >> str;

    for (int i = 0; i < N; i++) {
        if ('a' <= str[i] && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        } else if ('A' <= str[i] && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }

    std::cout << str << std::endl;
}