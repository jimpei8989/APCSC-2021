// Acknowledgement - Thanks for the author of the problem for providing the
// solution program

#include <iostream>

const int di[] = {-1, 1, 0, 0, 0, 0};
const int dj[] = {0, 0, -1, 1, 0, 0};
const int dk[] = {0, 0, 0, 0, -1, 1};

int main() {
    int map[50][50][50];
    int N, M, K;
    std::cin >> N >> M >> K;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < K; k++) {
                std::cin >> map[i][j][k];
            }
        }
    }

    int pi = -1, pj = -1, pk = -1;
    int i = 0, j = 0, k = 0;
    bool has_next_step = true;
    while (has_next_step) {
        has_next_step = false;
        for (int d = 0; d < 6 && !has_next_step; d++) {
            int ti = i + di[d], tj = j + dj[d], tk = k + dk[d];
            if (0 <= ti && ti <= N - 1 && 0 <= tj && tj <= M - 1 && 0 <= tk &&
                tk <= K - 1 && !(ti == pi && tj == pj && tk == pk) &&
                map[ti][tj][tk] == 0) {
                pi = i, pj = j, pk = k;
                i = ti, j = tj, k = tk;
                has_next_step = true;
            }
        }
    }
    std::cout << i << ' ' << j << ' ' << k << std::endl;
}
