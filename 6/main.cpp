#include <iostream>
#include <math.h>
#include <string>

const size_t CAP = 100;

int main() {
  size_t sumOfSquared = 0, sumOfSumSquared = 0;

  for (size_t i = 0; i < CAP;) sumOfSquared     += pow(++i, 2);
  for (size_t i = 0; i < CAP;) sumOfSumSquared  += ++i;

  sumOfSumSquared = pow(sumOfSumSquared, 2);

  std::cout << "\n\nAnswer: " << sumOfSumSquared - sumOfSquared << "\n\n";

  return 0;
}
