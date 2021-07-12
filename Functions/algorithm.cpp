#include <algorithm>
#include <iostream>

int main() {
    int n = 10;
    int arr[10] = {3, 14, 1, 5, 926, 27, 18, 281, 8, -1};

    std::cout << "std::min(arr[0], arr[1]): " << std::min(arr[0], arr[1])
              << std::endl;
    std::cout << "std::max(arr[0], arr[1]): " << std::max(arr[0], arr[1])
              << std::endl;

    int largest = arr[0];
    for (int i = 1; i < n; i++)
        largest = std::max(largest, arr[i]);

    std::cout << "largest: " << largest << std::endl;

    std::sort(arr, arr + n);
    for (int i = 0; i < n; i++) std::cout << arr[i] << " ";
    std::cout << std::endl;
}