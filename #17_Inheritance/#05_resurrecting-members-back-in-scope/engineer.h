#ifndef ENGINEER_H
#define ENGINEER_H

// Engineer is doing private inheritance
class Engineer : private Person {
  friend std::ostream& operator<<(std::ostream& out, const Engineer& operand);

public:
  Engineer();
  ~Engineer();

  void bild_something(){
    m_full_name = "John Snow";
    m_age = 23;
    // m_address = "Somewhere in the world";  : Complier error
  }

public:
  using Person::add;

protected:
  using Person::get_full_name;
  using Person::get_age;
  using Person::get_address;

  int get_contract_count() const {
    return contract_count;
  }

private:
  int contract_count{0};
};

#endif // !ENGINEER_H
