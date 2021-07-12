#include <algorithm>
#include <cstdlib>
#include <iostream>

double uniform() { return static_cast<double>(rand()) / RAND_MAX; }

int rand_int(int a, int b) { return rand() % (b - a) + a; }

int draw(int arr[], int n) { return arr[rand_int(0, n)]; }

void random_shuffle(int arr[], int n) {
    for (int i = 1; i < n; i++) std::swap(arr[i], arr[rand_int(0, i + 1)]);
}

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
