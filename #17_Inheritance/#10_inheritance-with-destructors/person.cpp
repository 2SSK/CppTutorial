#include "person.h"
#include <iostream>
#include <iomanip>
#include <string_view>

Person::Person(){
  std::cout << "Default constructor for Person called..." << std::endl;
}

Person::Person(std::string_view fullname, int age,std::string_view address)
  : m_full_name(fullname), 
  m_age(age), 
  m_address(address) {
  std::cout << "Custom constructor for Person called..." << std::endl;
}

Person::Person(const Person& source)
  : m_full_name(source.m_full_name),
  m_age(source.m_age),
  m_address(source.m_address){
  std::cout << "----------" << std::endl;
  std::cout << "Custom copy constructor for Person called..." << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Person& person){
  out << "Person {" << std::endl 
    << std::setw(10) << "Full name : " << person.get_full_name() << std::endl 
    << std::setw(10) << "Age : " << person.get_age() << std::endl 
    << std::setw(10) <<"Address : " << person.get_address() << std:: endl 
    << "}";

  return out;
}

Person::~Person(){
  std::cout << "Destructor for Person called..." << std::endl;
}
