#include <iostream>


const size_t CAP = 8000000000;


size_t solution1() {
  size_t sum = 0;

  for (size_t number = 0; number < CAP; ++number) {
    if (number % 3 == 0 || number % 5 == 0) sum += number;
  }

  return sum;
}

// faster solution
size_t solution2() {
  size_t sum = 0, number = 3;

  for (; number < CAP; number += 3)   sum += number;
  number = 5;
  for (; number < CAP; number += 5)   if (number % 3 != 0)  sum += number;

  return sum;
}


int main() {
  std::cout << "\nsum: " << solution2() << "\n\n";
  return 0;
}
