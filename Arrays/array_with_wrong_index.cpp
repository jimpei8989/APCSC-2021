#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    for (int i = -5; i < 10; i++) {
        std::cout << "i = " << i << ";\tarr[i] = " << arr[i] << std::endl;
    }

    for (int i = -5; i < 10; i++) {
        arr[i] = i * i * i;
    }

    for (int i = -5; i < 10; i++) {
        std::cout << "i = " << i << ";\tarr[i] = " << arr[i] << std::endl;
    }
}