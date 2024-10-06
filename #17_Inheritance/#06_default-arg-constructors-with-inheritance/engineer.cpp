#include "person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer(){
  std::cout << "Default constructor for Engineer called..." << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Engineer& operand){
  out << "Engineer [Full name : " << operand.get_full_name() << ", Age : " << operand.get_age() << ", Address : " << operand.get_address() << ", contract count : " << operand.contract_count << "]";
  return out;
}

Engineer::~Engineer(){}
