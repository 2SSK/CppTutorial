#include <iostream>

// A statement is a basic unit of computation in a C++ program
/*
 Every C++ program is a collection of statements organized in a certain way to
 achieve some goal
 */
// Statements end with a semicolon in C++ (;)
// Statements are executed in order from top to bottom when the program is run

// Function
int addNumbers(int a, int b) {
  int sum = a + b;
  return sum;
}

int main() {
  std::cout << "Statements and Functions: " << std::endl;

  int firstNumber = 12;
  int secondNumber = 9;

  int sum = addNumbers(firstNumber, secondNumber);

  std::cout << "Sum of " << firstNumber << " and " << secondNumber << " is "
            << sum << std::endl;

  return 0;
}
