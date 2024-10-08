#ifndef DOG_H
#define DOG_H

#include "feline.h"

class Dog : public Feline {
public:
  Dog() = default;
  Dog(std::string_view fur_style, std::string_view description);
  virtual ~Dog();

  virtual void bark() const {
    std::cout << "Dog::bar called : Woof!" << std::endl;
  }

  void run() const override final {
    std::cout << "Dog::run called" << std::endl;
  }

  // Stream Insertable interface
  virtual void stream_insert(std::ostream &out) const override {
    out << "Dog [description : " << m_description
        << ", fur_style : " << m_fur_style << "]" << std::endl;
  }
};

#endif // DOG_H
