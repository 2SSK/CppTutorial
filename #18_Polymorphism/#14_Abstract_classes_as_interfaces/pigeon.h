#ifndef PIGEON_H
#define PIGEON_H

#include "bird.h"
class Pigeon : public Bird {
public:
  Pigeon() = default;
  Pigeon(const std::string_view m_wing_color, std::string_view description);
  virtual ~Pigeon();

  virtual void coo() const {
    std::cout << "Pigeon::coo called for pigeon : " << m_description
              << std::endl;
  }

  virtual void breathe() const override {
    std::cout << "Pigeon::breathe called for : " << m_description << std::endl;
  }

  virtual void fly() const override {
    std::cout << "Pigeon::fly() called for bird : " << m_description
              << std::endl;
  }

  // Stream Insertable interface
  virtual void stream_insert(std::ostream &out) const override {
    out << "Pigeon [description : " << m_description
        << ", wing_color : " << m_wing_color << "]" << std::endl;
  }
};

#endif // PIGEON_H
