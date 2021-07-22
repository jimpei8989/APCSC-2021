#include <iostream>

int main() {
    char strs[4][101];
    for (int i = 0; i < 4; i++) {
        std::cin >> strs[i];
    }

    char ans[510] = {};
    int offset = 0;
    for (int i = 0; i < 4; i++) {
        int x;
        std::cin >> x;
        strcpy(ans + offset, strs[x - 1]);
        offset += strlen(strs[x - 1]);
    }
    std::cout << ans << std::endl;
}