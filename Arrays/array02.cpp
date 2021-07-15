#include <iostream>

int main() {
    int N, A[1001], B[1001];

    std::cin >> N;
    for (int i = 0; i < N; i++) std::cin >> A[i];
    for (int i = 0; i < N; i++) std::cin >> B[i];

    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans += A[i] * B[i];
    }

    std::cout << ans << std::endl;
}