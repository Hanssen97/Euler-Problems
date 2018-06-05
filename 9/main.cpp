#include <iostream>
#include <math.h>
#include <string>

const size_t SUM = 1000;

int main() {
  for(size_t a = 1; a < SUM; ++a) {
    for(size_t b = a+1; b <= SUM - a; ++b) {
      for(size_t c = b+1; c <= SUM - a - b; ++c) {
        if (a + b + c > SUM) break;
        if (a + b + c < SUM) continue;

        if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
          std::cout << "\nTriplet:\t" << a << "^2 + " << b << "^2 = " << c << "^2";
          std::cout << "\nSum:\t\t" << a+b+c;
          std::cout << "\nProduct:\t" << a*b*c << "\n";
        }
      }
    }
  }

  return 0;
}
