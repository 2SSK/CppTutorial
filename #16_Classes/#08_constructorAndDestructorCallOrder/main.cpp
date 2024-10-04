#include<bits/stdc++.h>
using namespace std;

class Dog{
private: 
  string name;
  string breed;
  int* p_age{nullptr};
public:
  Dog() = default;
  Dog(string_view name, string_view breed, int age);
  void output();
  ~Dog();
};

Dog::Dog(string_view name, string_view breed, int age): name{name}, breed{breed}{
  p_age = new int;
  *p_age = age;
  cout << "Constructor called for " << name << "!" << endl;
};

void Dog::output(){
  cout << "Name : " << name << endl;
  cout << "Breed : " << breed << endl;
  cout << "Age : " << *p_age << "yr" << endl << endl;
}

Dog::~Dog(){
  delete p_age;
  cout << "Destructor called for " << name << "!"  << endl;
}

int main(){
  cout << "Constructor & Destructor call order!" << endl << endl;

  Dog d1("Buddy", "Golden Retriever", 5);
  d1.output();

  Dog d2("Fluffy", "Shepherd", 2);
  d2.output();

  Dog d3("Kallu", "Gully ka kutta", 7);
  d3.output();

  Dog d4("Tom", "Pomeranian", 3);
  d4.output();

  return 0;
}
