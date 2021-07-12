#include <cstdlib>
#include <iostream>

int main() {
    std::cout << "RAND_MAX: " << RAND_MAX << std::endl;

    // changing the seed
    srand(29);

    int x = rand();
    std::cout << x << std::endl;
}