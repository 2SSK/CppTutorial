#include<bits/stdc++.h>
using namespace std;

/*  NOTE:
 *  Each class member function contains a hidden pointer 
 *  called this. That pointed contains the address of 
 *  the current object, for which the method is being 
 *  executed. This also applies to constructors and 
 *  destructors.
 */

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
  this->p_age = new int;
  *p_age = age;
  cout << "Constructor called for " << name << "! at " << this << endl;
  this->output();
};

void Dog::output(){
  cout << "Name : " << name << endl;
  cout << "Breed : " << breed << endl;
  cout << "Age : " << *p_age << "yr" << endl << endl;
}

Dog::~Dog(){
  delete p_age;
  cout << "Destructor called for " << name << "! at " << this  << endl;
}

int main(){
  cout << "This pointer!" << endl << endl;

  Dog d1("Buddy", "Golden Retriever", 5);
  Dog d2("Fluffy", "Shepherd", 2);
  Dog d3("Kallu", "Gully ka kutta", 7);

  cout << "Done!" << endl;

  return 0;
}
