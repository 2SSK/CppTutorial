#include <iostream>

/*
 * There is no value** or **value, or //value or value//. They don't make sense,
 * these prefix/postfix operators are only available for + and -.
 */

int main() {
  int value{5};

  // Increment by one
  value = value + 1;
  std::cout << "The value is : " << value << std::endl;

  value = 5; // Reset the value

  value = value - 1;
  std::cout << "The value is : " << value << std::endl;

  value = 5;

  // Increment with postfix
  std::cout << "The value is (incrementing): " << value++ << std::endl;
  std::cout << "The value is : " << value << std::endl;

  value = 5; // Reset the value

  // Decrement with postfix
  std::cout << "The value is (decrementing): " << value-- << std::endl;
  std::cout << "The value is : " << value << std::endl;

  std::cout << "--------------------------------" << std::endl;

  value = 5; // Reset the value

  // Increment with prefix
  std::cout << "The value is (prefix++) : " << ++value << std::endl;

  value = 5; // Reset the value

  std::cout << "The value is (prefix--) : " << --value << std::endl;

  return 0;
}
