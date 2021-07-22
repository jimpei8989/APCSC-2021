// Acknowledgement - Thanks for the author of the problem for providing the
// solution program

#include <iostream>

int main() {
    int map[50][50][50];
    int N, M, K;
    std::cin >> N >> M >> K;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int l = 0; l < K; l++) {
                std::cin >> map[i][j][l];
            }
        }
    }

    int i = 0, j = 0, k = 0;
    while (true) {
        map[i][j][k] = 1;
        if (i - 1 >= 0 && map[i - 1][j][k] == 0) {  // go up
            i = i - 1;
        } else if (i + 1 < N && map[i + 1][j][k] == 0) {  // go down
            i = i + 1;
        } else if (j - 1 >= 0 && map[i][j - 1][k] == 0) {  // go forward
            j = j - 1;
        } else if (j + 1 < M && map[i][j + 1][k] == 0) {  // go backward
            j = j + 1;
        } else if (k - 1 >= 0 && map[i][j][k - 1] == 0) {  // go left
            k = k - 1;
        } else if (k + 1 < K && map[i][j][k + 1] == 0) {  // go right
            k = k + 1;
        } else {
            break;
        }
    }
    std::cout << i << ' ' << j << ' ' << k << std::endl;
}
