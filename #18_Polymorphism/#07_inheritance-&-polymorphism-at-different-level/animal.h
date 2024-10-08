#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include <string_view>

class Animal {
public:
  Animal() = default;
  Animal(const std::string_view description);
  virtual ~Animal();

  virtual void breathe() const {
    std::cout << "Animal::breath called for : " << m_description << std::endl;
  }

protected:
  std::string m_description;
};

#endif // ANIMAL_H
