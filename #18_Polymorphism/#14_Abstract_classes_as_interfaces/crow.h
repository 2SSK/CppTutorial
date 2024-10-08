#ifndef CROW_H
#define CROW_H

#include "bird.h"
class Crow : public Bird {
public:
  Crow() = default;
  Crow(std::string_view wing_color, std::string_view description);
  virtual ~Crow();

  virtual void caw() const {
    std::cout << "Crow::caw called for crow : " << m_description << std::endl;
  }

  virtual void breathe() const override {
    std::cout << "Crow::breathe called for : " << m_description << std::endl;
  }

  virtual void fly() const override {
    std::cout << "Crow::fly() called for bird : " << m_description << std::endl;
  }

  // Stream Insertable interface
  virtual void stream_insert(std::ostream &out) const override {
    out << "Crow [description : " << m_description
        << ", wing_color : " << m_wing_color << "]" << std::endl;
  }
};

#endif // CROW_H
