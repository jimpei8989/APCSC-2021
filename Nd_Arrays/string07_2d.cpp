#include <cstring>
#include <iostream>

int main() {
    int order[4];
    for (int i = 0; i < 4; i++) std::cin >> order[i];

    char strs[4][101];
    for (int i = 0; i < 4; i++) {
        std::cin >> strs[i];
    }

    char ans[510] = {};
    int offset = 0;
    for (int i = 0; i < 4; i++) {
        strcpy(ans + offset, strs[order[i] - 1]);
        offset += strlen(strs[order[i] - 1]);
    }
    std::cout << ans << std::endl;
}