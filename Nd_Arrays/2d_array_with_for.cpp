#include <iostream>
#include <iomanip>

int main() {
    int arr[9][9];

    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++) arr[i][j] = (i + 1) * (j + 1);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) std::cout << std::setw(3) << arr[i][j];
        std::cout << std::endl;
    }
}
