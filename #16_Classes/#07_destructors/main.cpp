#include<bits/stdc++.h>
using namespace std;

/*  NOTE: 
 *  Special methods that are called when an object 
 *  dies. They are needed when the object needs to 
 *  release some dynamic memory, or for some other kind 
 *  of clean up.
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
  p_age = new int;
  *p_age = age;
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
  cout << "Destructors!" << endl << endl;

  Dog d1("Buddy", "Golden Retriever", 5);
  d1.output();

  Dog d2("Fluffy", "Shepherd", 2);
  d2.output();

  Dog d3("Kallu", "Gully ka kutta", 7);
  d3.output();

  cout << "Done!" << endl;

  return 0;
}
