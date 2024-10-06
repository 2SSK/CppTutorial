#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>
#include <iomanip>

CivilEngineer::CivilEngineer(){
  std::cout << "Default constructor for CivilEngineer called..." << std::endl;
}

CivilEngineer::CivilEngineer(std::string_view fullname, int age, std::string_view address, int contract_count, std::string_view speciality) : Engineer(fullname, age, address, contract_count), m_speciality{speciality}{

  std::cout << "Custom constructor for CivilEngineer called..." << std::endl;
}

CivilEngineer::CivilEngineer(const CivilEngineer& source)
  : Engineer(source),
  m_speciality(source.m_speciality)
{
  std::cout << "----------" << std::endl;
  std::cout << "Custom copy constructor for CivilEngineer called..." << std::endl;
}

std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand){
  out << "\nCivilEngineer {" <<std::endl 
    << std::setw(18)<< "fullname : " << operand.get_full_name() << std::endl 
    << std::setw(18) << "age : " << operand.get_age() << std::endl 
    << std::setw(18) << "address : " << operand.get_address() << std::endl 
    << std::setw(18) << "contract_count : " << operand.get_contract_count() << std::endl 
    << std::setw(18) << "speciality : " << operand.m_speciality << std::endl 
    << "}" << std::endl;
  return out;
}

CivilEngineer::~CivilEngineer(){}
