#include <iostream>
#include <math.h>
#include <string>

const size_t CAP = 2000000;


bool isPrime(size_t number) {
  size_t threshold = sqrt(number);
  bool   prime     = false;

  for (size_t i = 3; i <= threshold; ++i)    if (number % i == 0) return false;

  return true;
}


int main() {
  size_t number = 3, sum = 2;

  for (; number < CAP; number += 2)  if (isPrime(number)) sum += number;

  std::cout << "\n\nAnswer: " << sum << "\n\n";

  return 0;
}
