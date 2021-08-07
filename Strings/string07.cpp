#include <iostream>
#include <cstring>

int main() {
    int order[4];
    for (int i = 0; i < 4; i++) {
        std::cin >> order[i];
    }

    char a[110], b[110], c[110], d[110];
    std::cin >> a >> b >> c >> d;

    char ans[510] = {};
    for (int i = 0; i < 4; i++) {
        if (order[i] == 1) {
            strcat(ans, a);
        } else if (order[i] == 2) {
            strcat(ans, b);
        } else if (order[i] == 3) {
            strcat(ans, c);
        } else if (order[i] == 4) {
            strcat(ans, d);
        }
    }
    std::cout << ans << std::endl;
}