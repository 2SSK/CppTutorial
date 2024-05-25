#include <iostream>

int main() {

  std::cout << "size of a char: " << sizeof(char) << " bytes" << std::endl
            << std::endl;

  char character{'A'};

  std::cout << "character: " << character << " | size: " << sizeof(character)
            << " bytes" << std::endl;

  char value = 65;
  std::cout << "value: " << value << " | size: " << sizeof(value) << " bytes"
            << std::endl;
  std::cout << "value(int): " << static_cast<int>(value)
            << " | size: " << sizeof(value) << " bytes" << std::endl;

  return 0;
}
