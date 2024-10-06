#ifndef NURSE_H
#define NURSE_H

#include "person.h"

// Nurse will do protected inheritance
class Nurse : protected Person {
  friend std::ostream& operator<<(std::ostream& , const Nurse& operand);

public:
  Nurse();
  ~Nurse();

  void treat_unwell_person(){
    m_full_name = "Nurse Joy";
    m_age = 23;
    // m_address = "Pokemon center";  : Complier error
  }

private:
  int practice_certificate_id{0};
};

#endif // !NURSE_H
