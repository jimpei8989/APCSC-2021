#include <iostream>
#include <iomanip>

int main() {
    int arr[][3] = {{1, 2, 3}, {4, 5}, {6}};
    std::cout << "arr:\t" << static_cast<void*>(arr) << std::endl;
    std::cout << "arr[0][0]:\t" << arr[0][0] << std::endl;
    std::cout << "arr[0]:\t" << arr[0] << std::endl;
    std::cout << "sizeof(arr[0]):\t" << sizeof(arr[0]) << std::endl;
    std::cout << "arr[5]:\t" << *(reinterpret_cast<int*>(arr) + 4) << std::endl;
}
