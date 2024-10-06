#include "person.h"

Person::Person() {}

Person::Person(std::string& fname, std::string& lname): first_name{fname}, last_name{lname} {}

std::ostream& operator<<(std::ostream& out, const Person& person){
  out << "Person [" << person.first_name << " " << person.last_name << "]";
  return out;
}

Person::~Person() {}
