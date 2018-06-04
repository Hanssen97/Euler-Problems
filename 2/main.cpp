#include <iostream>

const size_t CAP = 4000000;


size_t fibonacci(size_t sum = 2, size_t prev = 1, size_t current = 2) {
  size_t next = prev + current;

  if (next > CAP)     return sum;
  if (next % 2 == 0)  sum += next;

  return fibonacci(sum, current, next);
}

int main() {
  std::cout << "\nAnswer: " << fibonacci() << "\n\n";
  return 0;
}
