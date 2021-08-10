#include "lib0217.h"

int median(int a, int b, int c) {
    if (b <= a && a <= c) return a;
    else if (a <= b && b <= c) return b;
    else return c;
}