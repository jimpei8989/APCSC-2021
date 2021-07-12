#include <algorithm>
#include <iostream>

int change(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        while (i < n && arr[i] % 2 == 1) {
            std::swap(arr[i], arr[n - 1]);
            n--;
        }
    }
    return n;
}

int main() {
    int n = 8;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    std::cout << "Before (" << n << "): [";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << (i == n - 1 ? "]\n" : ", ");

    n = change(arr, n);

    std::cout << "After (" << n << "): [";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << (i == n - 1 ? "]\n" : ", ");
}