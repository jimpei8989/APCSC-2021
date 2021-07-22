#include <iostream>

int main() {
    char strings[10][101];

    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        std::cin >> strings[i];
    }

    for (int i = 0; i < N; i++) {
        std::cout << "str " << i << ": " << strings[i] << std::endl;
    }
}
