// Acknowledgement - Thanks for the author of the problem for providing the
// solution program

#include <iostream>

int main() {
    int r1, c1, r2, c2;
    int A[101][101], B[101][101], C[101][101] = {};

    std::cin >> r1 >> c1 >> r2 >> c2;
    if (c1 != r2) {
        std::cout << "no answer" << std::endl;
    } else {
        for (int i = 1; i <= r1; i++) {
            for (int j = 1; j <= c1; j++) std::cin >> A[i][j];
        }

        for (int i = 1; i <= r2; i++) {
            for (int j = 1; j <= c2; j++) std::cin >> B[i][j];
        }

        for (int i = 1; i <= r1; i++) {
            for (int j = 1; j <= c2; j++) {
                for (int k = 1; k <= c1; k++) C[i][j] += A[i][k] * B[k][j];
            }
        }

        for (int i = 1; i <= r1; i++) {
            for (int j = 1; j <= c2; j++) std::cout << C[i][j] << " ";
            std::cout << std::endl;
        }
    }
}
