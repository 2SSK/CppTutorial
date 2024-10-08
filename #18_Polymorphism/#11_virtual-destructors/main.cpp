#include <iostream>
#include "dog.h"

int main(){
  std::cout << "Virtual Destructors!" << std::endl << std::endl;

  Animal * p_animal = new Dog;

  delete p_animal;

  return 0;
}
