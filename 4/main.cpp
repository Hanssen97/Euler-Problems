#include <iostream>
#include <math.h>
#include <string>

const size_t DIGITS = 3;


bool isPalindrome(size_t tmp) {
  std::string sa = std::to_string(tmp), sb = sa;
  std::reverse(sb.begin(), sb.end());
  return (sa.compare(sb) == 0);
}


int main() {
  size_t a, tmp, x = 0, y = 0, largest = 0;

  for (size_t i = 0; i < DIGITS; ++i)   a += 9 * pow(10, i);

  for (; a > y; --a) {
    for (size_t b = a; b > y; --b) {
      tmp = a*b;
      if (isPalindrome(tmp)) {
        if (tmp > largest) {
          x = a; y = b; largest = tmp;
        }
        break;
      }
    }
  }

  std::cout << "\n\nAnswer: " << x << " * " <<  y << " = " << largest << "\n\n";

  return 0;
}
