#include <cstring>
#include <iostream>

int main() {
    int order[4];
    for (int i = 0; i < 4; i++) std::cin >> order[i];

    char a[110], b[110], c[110], d[110];
    std::cin >> a >> b >> c >> d;

    char ans[510] = {};
    int offset = 0;
    for (int i = 0; i < 4; i++) {
        if (order[i] == 1) {
            strcpy(ans + offset, a);
            offset += strlen(a);
        } else if (order[i] == 2) {
            strcpy(ans + offset, b);
            offset += strlen(b);
        } else if (order[i] == 3) {
            strcpy(ans + offset, c);
            offset += strlen(c);
        } else if (order[i] == 4) {
            strcpy(ans + offset, d);
            offset += strlen(d);
        }
    }
    std::cout << ans << std::endl;
}