#include <iomanip>
#include <iostream>

int main() {
    int arr[][3] = {{1, 2, 3}, {4, 5}, {6}};
    std::cout << "arr:\t" << arr << std::endl;
    std::cout << "arr[0]:\t" << arr[0] << std::endl;
    std::cout << "arr[1]:\t" << arr[1] << std::endl;

    // Print the table
    for (int i = 0; i < 9; i++) {
        std::cout << *(reinterpret_cast<int*>(arr) + i)
                  << (i % 3 != 2 ? "\t" : "\n");
    }
}
