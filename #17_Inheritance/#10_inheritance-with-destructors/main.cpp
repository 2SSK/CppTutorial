#include<iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main(){
  std::cout << "Inheritance with destructors!" << std::endl << std::endl;

  CivilEngineer eng1(
    "Jhunjhun pare", 
    41, 
    "Khabsi", 
    12, 
    "Laying bricks"
  );

  std::cout << eng1 << std::endl;
  return 0;
}
