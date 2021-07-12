#include <iostream>

int main() {
    int n = 0;
    int m = n;
    int &k = n;

    std::cout << "n = " << n << ",\tm = " << m << ",\tk = " << k << std::endl;

    n += 1;
    std::cout << "n = " << n << ",\tm = " << m << ",\tk = " << k << std::endl;

    m += 1;
    std::cout << "n = " << n << ",\tm = " << m << ",\tk = " << k << std::endl;

    k += 1;
    std::cout << "n = " << n << ",\tm = " << m << ",\tk = " << k << std::endl;
}