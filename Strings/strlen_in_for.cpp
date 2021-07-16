#include <chrono>
#include <cstring>
#include <iostream>

using std::chrono::duration;
using std::chrono::duration_cast;
using std::chrono::high_resolution_clock;
using std::chrono::milliseconds;

const int MAXN = 1e5;
char str[MAXN];

int main() {
    memset(str, '!', MAXN - 1);
    str[MAXN - 1] = '\0';

    auto t1 = high_resolution_clock::now();
    for (int i = 0; i < strlen(str); i++) {
        // do something
    }
    auto duration1 =
        duration_cast<milliseconds>(high_resolution_clock::now() - t1).count();

    auto t2 = high_resolution_clock::now();
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        // do something
    }
    auto duration2 =
        duration_cast<milliseconds>(high_resolution_clock::now() - t2).count();

    std::cout << "strlen in for: " << duration1 << "ms" << std::endl;
    std::cout << "strlen outside: " << duration2 << "ms" << std::endl;
}