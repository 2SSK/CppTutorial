#include<bits/stdc++.h>
using namespace std;

class Dog{
private:
  size_t leg_count;
  size_t ear_count;
  int* p_age{nullptr};

public:
  Dog() = default;
};

int main(){
  cout << "Size of class objects!" << endl << endl;

  Dog dog1;
  cout << "sizeof(size_t) : " << sizeof(size_t) << endl;
  cout << "sizeof(int*) : " << sizeof(int*) << endl;
  cout << "sizeof(Dog) : " << sizeof(Dog) << endl;

  string name{"Gotu"};

  cout << "sizeof(name) : " << sizeof(name) << endl;

  return 0;
}
