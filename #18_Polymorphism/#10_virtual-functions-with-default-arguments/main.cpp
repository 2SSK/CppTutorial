#include <iostream>
#include "derived.h"

/*  NOTE:
 *  - Default arguments are hanadled at compile time
 *  - Virtual functions are called at runtime with 
 *    polymorphism
 *  - If you get default arguments with virtual 
 *    functions, you might get weird(erroneous) 
 *    with polymorphism.
*/

int main(){
  std::cout << "Virtual functions with default arguments!" << std::endl << std::endl;

  // Base ptr : Uses Polymorphism
  Base* base_ptr = new Derived;
  double result = base_ptr->add();
  std::cout << "Result (base ptr) : " << result << std::endl;

  std::cout  << "---------------------------------" << std::endl;

  // Base ref : Uses Polymorphism
  Derived derived1;
  Base& base_ref = derived1;
  result = base_ref.add();
  std::cout << "Result (base ref) : " << result << std::endl;

  std::cout  << "---------------------------------" << std::endl;

  // Raw objects
  Base base3;
  result = base3.add();
  std::cout << "raw result : " << result << std::endl;

  std::cout  << "---------------------------------" << std::endl;

  // Direct object : Uses static binding
  Derived derived2;
  result = derived2.add();
  std::cout << "Result (Direct object) : " << result << std::endl;

  return 0;
}
