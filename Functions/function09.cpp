#include "lib0223.h"

#include <cmath>

bool solve_quadratic(int a, int b, int c, double &x1, double &x2) {
    long long delta = 1LL * b * b - 4LL * a * c;
    if (delta < 0) {
        return false;
    } else {
        x1 = (-b - sqrt(delta) * (a > 0 ? 1 : -1)) / (2 * a);
        x2 = (-b + sqrt(delta) * (a > 0 ? 1 : -1)) / (2 * a);
        return true;
    }
}
