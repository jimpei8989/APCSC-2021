#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    // changing the seed using time
    srand(time(0));

    int x = rand();
    std::cout << x << std::endl;
}