#include <iostream>

void assign(int arr[], int n, int a, int b, int c) {
    for (int i = 0; i < n; i++) {
        arr[i] = a * i * i + b * i + c;
    }
}

int main() {
    int arr[10], a, b, c;
    std::cin >> a >> b >> c;
    assign(arr, 10, a, b, c);

    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << (i == 9 ? '\n' : ' ');
    }
}