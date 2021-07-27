#include <algorithm>
#include <iostream>

void print_arr(int arr[], int n) {
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << (i == n - 1 ? '\n' : ' ');
}

bool cmp(const int a, const int b) { return a > b; }

int main() {
    int n = 10;
    int arr[10] = {3, 14, 1, 5, 926, 27, 18, 281, 8, -1};

    // sort only
    std::sort(arr, arr + n);
    print_arr(arr, n);

    // shuffle the arr
    std::random_shuffle(arr, arr + n);

    // sort + reverse
    std::sort(arr, arr + n);
    std::reverse(arr, arr + n);
    print_arr(arr, n);

    std::random_shuffle(arr, arr + n);

    // sort with cmp function
    std::sort(arr, arr + n, cmp);
    print_arr(arr, n);
}

bool cmp_long(const int a, const int b) {
    if (a > b)
        return true;
    else
        return false;
}