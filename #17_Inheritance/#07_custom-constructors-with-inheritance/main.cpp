#include<iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main(){
  std::cout << "Custom constructors with inheritance!" << std::endl << std::endl;

  CivilEngineer ce1("Bhura mistri", 38, "Shamsan tola", 5, "Mixing cement");
  std::cout << std::endl << ce1 << std::endl;


  CivilEngineer ce2("Samdev", 41, "Chamar toli", 2, "Laying bricks");
  std::cout << std::endl << ce2 << std::endl;

  return 0;
}
