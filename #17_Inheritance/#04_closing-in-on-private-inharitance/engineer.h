#ifndef ENGINEER_H
#define ENGINEER_H

// Engineer is doing private inheritance
class Engineer : private Person {
  friend std::ostream& operator<<(std::ostream& out, const Engineer& operand);

public:
  Engineer();
  ~Engineer();

  void bild_something(){
    m_full_name = "John Doe";
    m_age = 45;
    // m_address = "Somewhere in the world";  : Complier error
  }

private:
  int contract_count{0};
};

#endif // !ENGINEER_H
