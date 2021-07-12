#include <chrono>
#include <iostream>
#include <string>

using std::string;
using std::chrono::duration;
using std::chrono::duration_cast;
using std::chrono::high_resolution_clock;
using std::chrono::milliseconds;

void function_a(string s) {}
void function_b(string &s) {}

int main() {
    string s(1000000, 'a');

    auto t1 = high_resolution_clock::now();
    for (int i = 0; i < 10000; i++) {
        function_a(s);
    }
    auto duration1 =
        duration_cast<milliseconds>(high_resolution_clock::now() - t1).count();

    auto t2 = high_resolution_clock::now();
    for (int i = 0; i < 10000; i++) {
        function_b(s);
    }
    auto duration2 =
        duration_cast<milliseconds>(high_resolution_clock::now() - t2).count();

    std::cout << "Call by value (function_a) for 10000 times: " << duration1 << "ms" << std::endl;
    std::cout << "Call by reference (function_b) for 10000 times: " << duration2 << "ms" << std::endl;
}
