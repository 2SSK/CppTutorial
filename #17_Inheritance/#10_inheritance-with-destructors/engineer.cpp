#include "person.h"
#include "engineer.h"
#include <iostream>
#include <iomanip>

Engineer::Engineer(){
  std::cout << "Default constructor for Engineer called..." << std::endl;
}

Engineer::Engineer(std::string_view fullname, int age, std::string_view address, int contract_count_param)
  : 
  Person(fullname, age, address), 
  contract_count( contract_count_param )
{
  std::cout << "Custom constructor for Engineer called..." << std::endl;
}


Engineer::Engineer(const Engineer& source)
  : Person(source),
  contract_count(source.contract_count) 
{
  std::cout << "----------" << std::endl;
  std::cout << "Custom copy constructor for Engineer called..." << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Engineer& operand){
  out 
    << "\nEngineer ["<< std::endl 
    << std::setw(18) << "fullname : " << operand.get_full_name() << std::endl 
    << std::setw(18) << "Age : " << operand.get_age() << std::endl 
    << std::setw(18) << "Address : " << operand.get_address() << std::endl 
    << std::setw(18) << "contract_count : " << operand.contract_count 
    << std::endl << "]" << std::endl;

  return out;
}

Engineer::~Engineer(){
  std::cout << "Destructor for Engineer called..." << std::endl;
}
