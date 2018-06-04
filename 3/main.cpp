#include <iostream>
#include <math.h>

const size_t NUMBER = 600851475143;


int main() {
  size_t number = NUMBER, largest = 0;

  for (size_t i = 2; i <= number; ++i) {
    if (number % i == 0) {
      if (i > largest) largest = i;
      number /= i;
      i = 1; // loop will add 1 aditionally
    }
  }

  std::cout << "\nAnswer: " << largest << "\n\n";

  return 0;
}
