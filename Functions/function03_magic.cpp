#include "lib0217.h"
#include <algorithm>

int median(int a, int b, int c) {
  return 0L + a + b + c - std::max(a, std::max(b, c)) - std::min(a, std::min(b, c));
}