#include <iostream>

int main() {
  std::cout << "Errors and warnings in cpp: " << std::endl;

  // Compile Time Errors
  std::cout << "\t1. Compile Time Errors" << std::endl;
  /*
    Compile Time Errors are those errors that occur at the time of compilation.
    For example, if you are trying to access an undeclared variable or you make
    any syntax error.
  */

  // Run Time Erros
  std::cout << "\t2. Run Time Errors" << std::endl;
  /*
    Run Time Errors are those errors that occur when the program is running.
    For example, if you are trying to access an array element that is out of
    bound.
  */

  // Warnings
  std::cout << "\t3. Warnings" << std::endl;
  /*
    Warnings are those messages that are generated by the compiler when it
    compiles the program. For example, if you are using a variable that is
    declared but not used anywhere in the program.
  */

  return 0;
}
