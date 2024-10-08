#ifndef BIRD_H
#define BIRD_H

#include "animal.h"
class Bird : public Animal {
public:
  Bird() = default;
  Bird(std::string_view wing_color, std::string_view description);
  virtual ~Bird();

  virtual void fly() const {
    std::cout << "Bird::fly() called for bird : " << m_description << std::endl;
  }
  //
  // Stream Insertable interface
  virtual void stream_insert(std::ostream &out) const override {
    out << "Bird [description : " << m_description
        << ", wing_color : " << m_wing_color << "]" << std::endl;
  }

protected:
  std::string m_wing_color;
};

#endif // BIRD_H
