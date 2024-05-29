#include <iostream>

// Precedence : Which operation to do first
// Associativity : Which direction or which order

int main() {
  int a{6}, b{3}, c{8}, d{9}, e{3}, f{2}, g{5};

  int result = a + b * c - d / e - f + g;

  /*
   * b * c = 3 * 8 = 24
   * d / e = 9 / 3 = 3
   * a + 24 - 3 - f + g = 6 + 24 - 3 - 2 + 5 = 30
   */

  std::cout << "The result is : " << result << std::endl;

  return 0;
}
