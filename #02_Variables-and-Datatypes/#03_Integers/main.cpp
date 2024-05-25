#include <iostream>

/*
 * Integer stores decimals
 * Typically occupies 4 bytes or more in memory
 */

int main() {
  int age;
  std::cout << "Enter your age: ";
  std::cin >> age;

  std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;

  int elephant_count; // Variable may contain garbage value
  int lion_count{};   // Variable is initialized to 0
  int dog_count{10};  // Variable is initialized to 10
  int cat_count{25};  // Variable is initialized to 25

  std::cout << "Elephants: " << elephant_count << std::endl;
  std::cout << "Lions: " << lion_count << std::endl;
  std::cout << "Dogs: " << dog_count << std::endl;
  std::cout << "Cats: " << cat_count << std::endl;

  int domesticated_count = dog_count + cat_count;
  std::cout << "Domesticated Animals: " << domesticated_count << std::endl;

  // Functional Initialization
  int narrowing_conversion_function(2.9);
  std::cout << "Narrowing Conversion: " << narrowing_conversion_function
            << std::endl;
  std::cout << "Size of Narrowing Conversion: "
            << sizeof(narrowing_conversion_function) << " bytes" << std::endl;

  return 0;
}
