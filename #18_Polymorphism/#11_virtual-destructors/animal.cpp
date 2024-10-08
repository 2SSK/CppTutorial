#include "animal.h"


Animal::Animal(const std::string_view description)
: m_description(description)
{}

Animal::~Animal(){
  std::cout << "Animal destructor called" << std::endl;
}
