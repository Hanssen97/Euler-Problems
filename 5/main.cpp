#include <iostream>
#include <math.h>
#include <string>

const size_t CAP = 20;

int main() {
  size_t number = 2;
  bool divisibleByAll;

  for (;;number+=2) {
    divisibleByAll = true;
    for (size_t i = 2; i < CAP; ++i) {
      if (number % i != 0) {
        divisibleByAll = false;
        break;
      }
    }
    if (divisibleByAll) break;
  }

  std::cout << "\n\nAnswer: " << number << "\n\n";

  return 0;
}
