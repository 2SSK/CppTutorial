#ifndef FELINE_H
#define FELINE_H

#include "animal.h"

class Feline : public Animal {
public:
  Feline() = default;
  Feline(std::string_view fur_style, std::string_view description);
  virtual ~Feline();

  virtual void run() const {
    std::cout << "Feline " << m_description << " is running" << std::endl;
  }

  // Stream Insertable interface
  virtual void stream_insert(std::ostream &out) const override {
    out << "Feline [description : " << m_description << "]" << std::endl;
  }

  std::string m_fur_style;
};

#endif // FELINE_H
