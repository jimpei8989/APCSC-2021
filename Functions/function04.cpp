#include "function04.h"

#include <algorithm>
#include <cstdlib>

int cmp(int a, int b) {
    if (abs(a) != abs(b)) {
        return abs(a) < abs(b);
    } else {
        return a < b;
    }
}

void sort_by_abs(int arr[], int n) {
    std::sort(arr, arr + n, cmp);
}
