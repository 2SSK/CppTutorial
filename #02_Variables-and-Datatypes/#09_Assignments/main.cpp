#include <iostream>

int main() {
  int var1{123}; // Declare and initialize
  std::cout << "var1: " << var1 << std::endl;

  var1 = 55; // Assign new value
  std::cout << "var1: " << var1 << std::endl;

  std::cout << "-----------------------" << std::endl;

  double var2{44.55}; // delare and initialize
  std::cout << "var2: " << var2 << std::endl;

  var2 = 99.99; // Assign new value
  std::cout << "var2: " << var2 << std::endl;

  std::cout << "-----------------------" << std::endl;

  bool state{false}; // Declare and initialize
  std::cout << "state: " << state << std::endl;

  state = true; // Assign new value

  std::cout << "state: " << state << std::endl;

  std::cout << "-----------------------" << std::endl;

  return 0;
}
