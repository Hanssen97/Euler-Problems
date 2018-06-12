#include <iostream>
#include <math.h>
#include <string>

const size_t CAP = 10001;


bool isPrime(size_t number) {
  size_t threshold = sqrt(number);

  if (number % 2 == 0) return false;
  for (size_t i = 3; i <= threshold; i += 2)  if (number % i == 0)  return false;

  return true;
}


int main() {
  // we know 2 is prime so we start at 3 and check all odd numbers
  size_t number = 3, counter = 1;

  for (; counter < CAP; number += 2)  if (isPrime(number)) ++counter;

  std::cout << "\n\nAnswer: " << number-2 << "\n\n";

  return 0;
}
