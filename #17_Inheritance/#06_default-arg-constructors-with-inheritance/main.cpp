#include<iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"


//  NOTE: Always provide a default constructor for your classes, especially if they will be part of an inheritance hierarchy.
int main(){
  std::cout << "Default arg constructors with inheritance!" << std::endl << std::endl;

  CivilEngineer civil_engineer;

  return 0;
}
