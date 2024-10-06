#include<iostream>
#include "person.h"
#include "engineer.h"

int main(){
  std::cout << "Inheriting base constructors!" << std::endl << std::endl;

  Engineer eng1(
    "Dhella Baba", 
    41, 
    "Dhah (Ahir toli)"
  );

  std::cout << eng1 << std::endl;

  return 0;
}
