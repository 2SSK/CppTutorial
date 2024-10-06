#include "person.h"
#include "nurse.h"
#include <iostream>

Nurse::Nurse(){}

std::ostream& operator<<(std::ostream& out, const Nurse& operand){
  out << "Nurse [Full name : " << operand.get_full_name() << ", Age : " << operand.get_age() << ", Address : " << operand.get_address() << ", Practice certificate id : " << operand.practice_certificate_id << "]";
  return out;
}

Nurse::~Nurse(){}
