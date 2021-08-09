// Acknowledgement - Thanks for the author of the problem for providing the
// solution program

#include <iostream>

int main() {
    int n, m, map[100][100] = {}, cnt = 1;
    std::cin >> n >> m;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                map[i][j] = cnt; // i * m + j + 1
                cnt += 1;
                // map[i][j] = cnt++;
            }
        } else {
            for (int j = m - 1; j >= 0; j--) {
                map[i][j] = cnt; // i * m + m - j
                cnt += 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << map[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}
