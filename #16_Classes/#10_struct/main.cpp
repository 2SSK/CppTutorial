#include<bits/stdc++.h>
using namespace std;

// Members private by default
class Dog{
public:
  string name;
  string breed;
  int* p_age{nullptr};
};

// Members public by default
struct Cat{
  string name;
  string breed;
  int age;
};

int main(){
  cout << "Struct!" << endl;

  Dog d1;
  Cat c1;

  d1.name = "Buddy";
  c1.name = "Tom";

  cout << d1.name << endl;
  cout << c1.name << endl;

  return 0;
}
