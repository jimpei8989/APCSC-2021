#include <iostream>

int main() {
    int arr[3][3][3];

    for (int i = 0; i < 3; i++) {
        std::cout << "Level " << i << std::endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) std::cout << arr[i][j][k] << " ";
            std::cout << "\n";
        }
    }
}
