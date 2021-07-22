#include <iostream>

char big_array[50000 * 10];
int offset[50000];

int main() {
    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        std::cin >> (big_array + offset[i]);
        offset[i + 1] = offset[i] + strlen(big_array + offset[i]) + 1;
    }

    for (int i = 0; i < N; i++) {
        std::cout << "str " << i << ": " << (big_array + offset[i]) << std::endl;
    }
}
