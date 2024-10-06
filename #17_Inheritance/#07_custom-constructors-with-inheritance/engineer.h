#ifndef ENGINEER_H
#define ENGINEER_H

// Engineer is doing private inheritance
class Engineer : public Person {
  friend std::ostream& operator<<(std::ostream& out, const Engineer& operand);

public:
  Engineer();
  Engineer(std::string_view fullname, int age, std::string_view address, int contract_count);
  ~Engineer();

  void bild_something(){
    m_full_name = "John Snow";
    m_age = 23;
    // m_address = "Somewhere in the world";  : Complier error
  }

  int get_contract_count() const {
    return contract_count;
  }

private:
  int contract_count{0};
};

#endif // !ENGINEER_H
