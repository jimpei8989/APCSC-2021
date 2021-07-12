#include <algorithm>
#include <cstdlib>
#include <iostream>

double uniform() {
    // random double between 0 and 1
 }

int rand_int(int a, int b) {
    // random integer between a and b (exclusive)
}

int draw(int arr[], int n) {
    // draw from arr
 }

void random_shuffle(int arr[], int n) {}

int main() {
    srand(123);
    std::cout << "Uniform: " << uniform() << std::endl;
    std::cout << "Dice: " << rand_int(1, 7) << std::endl;

    int arr[] = {1, 2, 3, 4, 5};
    std::cout << "Draw from arr: " << draw(arr, 5) << std::endl;

    random_shuffle(arr, 5);
    std::cout << "After random shuffle: ";
    for (int i = 0; i < 5; i++) std::cout << arr[i] << (i == 4 ? "\n" : " ");
}
