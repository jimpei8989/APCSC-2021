#include <iostream>

int main() {
    char a[110], b[110], c[110], d[110];
    std::cin >> a >> b >> c >> d;

    char ans[510] = {};
    for (int i = 0; i < 4; i++) {
        int x;
        std::cin >> x;
        if (x == 1) {
            strcat(ans, a);
        } else if (x == 2) {
            strcat(ans, b);
        } else if (x == 3) {
            strcat(ans, c);
        } else if (x == 4) {
            strcat(ans, d);
        }
    }
    std::cout << ans << std::endl;
}