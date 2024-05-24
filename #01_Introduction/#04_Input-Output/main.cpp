#include <iostream>
#include <string>

int main() {

  std::cout << "========== Input * Output ==========" << std::endl << std::endl;

  std::cout << "STREAM\t\tPURPOSE" << std::endl << std::endl;

  std::cout << "std::cout\tPrinting data t othe console(terminal)" << std::endl;
  std::cout << "std::cin\tReading data from the terminal" << std::endl;
  std::cout << "std::cerr\tPrinting errors to the console" << std::endl;
  std::cout << "std::clog\tPrinting log messages to the console" << std::endl
            << std::endl;

  std::cout << "========== Example ==========" << std::endl << std::endl;

  // Example of cin and cout
  int age;
  std::string name;

  std::cout << "Enter your age: ";
  std::cin >> age;

  std::cin.ignore(); // Ignore the newline character in the input buffer

  std::cout << "Enter your name: ";
  std::getline(std::cin, name);

  if (age < 18) {
    std::cerr << std::endl << "You are a minor! " << name << std::endl;
  } else {
    std::clog << std::endl << "You are an adult! " << name << std::endl;
  }

  return 0;
}
