#ifndef DOG_H
#define DOG_H

#include "feline.h"

class Dog : public Feline {
public:
  Dog() = default;
  Dog(std::string_view fur_style, std::string_view description);
  ~Dog();

  virtual void bark() const {
    std::cout << "Dog::bar called : Woof!" << std::endl;
  }

  void run() const override final {
    std::cout << "Dog::run called" << std::endl;
  }

  void do_some_dog_thingy() {
    std::cout << "Doing some dog thingy..., speed : " << m_speed << std::endl;
  }

private:
  double m_speed{3.1};
};

#endif // DOG_H
