#ifndef CAT_H
#define CAT_H

#include "feline.h"
class Cat final : public Feline {
public:
  Cat() = default;
  Cat(std::string_view fur_style, std::string_view description);
  virtual ~Cat();

  virtual void meow() const {
    std::cout << "Cat::meow() called for cat " << std::endl;
  }

  virtual void run() const override {
    std::cout << "Cat " << m_description << " is running" << std::endl;
  }

  // Stream Insertable interface
  virtual void stream_insert(std::ostream &out) const override {
    out << "Cat [description : " << m_description
        << ", fur_style : " << m_fur_style << "]" << std::endl;
  }
};

#endif // CAT_H
