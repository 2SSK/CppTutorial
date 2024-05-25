#include <iomanip>
#include <iostream>

/*
 * Fractionals numbers are also called Floating Point Types
 * They are used to represent numbers with fractional parts in C++
 * They are divided into three types:
    - float {size: 4}
    - double {size: 8}
    - long double {size: 12}
 */

int main() {
  // Declare and initialize float variables
  float number1{1.123456768901234567890f};
  double number2{1.123456768901234567890};
  long double number3{1.123456768901234567890L};

  std::cout << std::setprecision(20);

  // Print the values and sizes of the variables
  std::cout << "float number1: " << number1 << " | size: " << sizeof(number1)
            << " bytes" << std::endl;
  std::cout << "double number2: " << number2 << " | size: " << sizeof(number2)
            << " bytes" << std::endl;
  std::cout << "long double number3: " << number3
            << " | size: " << sizeof(number3) << " bytes" << std::endl
            << std::endl;

  double number10{5.6};
  double number11{}; // Initialize to 0
  double number12{}; // Initialize to 0

  // Infinity
  double result{number10 / number11};

  std::cout << number10 << "/" << number11 << " =  " << result << std::endl;
  std::cout << result << " + " << number10 << " = " << result + number10
            << std::endl;

  // NaN
  result = number11 / number12;

  std::cout << number11 << "/" << number12 << " = " << result << std::endl;

  return 0;
}
