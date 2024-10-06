#include<iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main(){
  std::cout << "Resurrecting members back in scope!" << std::endl << std::endl;

  CivilEngineer civil_engineer;

  std::cout << civil_engineer << std::endl;

  return 0;
}
