#include "lib0218.h"

#include <algorithm>

long long int my_abs(int x) {
    return x > 0 ? x : -1L * x;
}

int cmp(int a, int b) {
    if (my_abs(a) != my_abs(b)) {
        return my_abs(a) < my_abs(b);
    } else {
        return a < b;
    }
}

void sort_by_abs(int arr[], int n) {
    std::sort(arr, arr + n, cmp);
}
