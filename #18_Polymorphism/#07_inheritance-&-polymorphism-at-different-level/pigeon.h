#ifndef PIGEON_H
#define PIGEON_H

#include "bird.h"
class Pigeon : public Bird {
public:
  Pigeon() = default;
  Pigeon(const std::string_view wing_color, std::string_view description);
  virtual ~Pigeon();

  virtual void coo() const {
    std::cout << "Pigeon::coo called for pigeon : " << m_description << std::endl;
  }

  virtual void breathe() const override {
    std::cout << "Pigeon::breathe called for : " << m_description << std::endl;
  }

  virtual void fly() const {
    std::cout << "Pigeon::fly() called for bird : " << m_description << std::endl;
  }
};

#endif // PIGEON_H
