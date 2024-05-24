#include <iostream>

int main() {
  std::cout << "========== Number System ==========" << std::endl;
  std::cout << "\t* Decimal\n\t* Binary\n\t* Octal\n\t* Hexadecimal"
            << std::endl;

  int number1 = 15;         // Decimal
  int number2 = 0b00001111; // Binary
  int number3 = 017;        // Octal
  int number4 = 0x0F;       // Hexadecimal

  std::cout << std::endl << "Number 1: " << number1 << std::endl;
  std::cout << "Number 2: " << number2 << std::endl;
  std::cout << "Number 3: " << number3 << std::endl;
  std::cout << "Number 4: " << number4 << std::endl;

  return 0;
}
