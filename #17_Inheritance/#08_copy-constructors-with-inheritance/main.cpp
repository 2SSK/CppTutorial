#include<iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main(){
  std::cout << "Copy constructs with inheritance!" << std::endl << std::endl;

  CivilEngineer eng1(
    "Dhella Baba", 
    41, 
    "Dhah (Ahir toli)", 
    12, 
    "Laying bricks"
  );

  CivilEngineer eng2(eng1);
  std::cout << eng2 << std::endl;

  return 0;
}
