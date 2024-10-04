#include<iostream>
#include "cylinder.h"
using namespace std;

int main(){
  cout << "Managing Class and Objects Trough Pointers!" << endl << endl;

  Cylinder c1(10, 10);

  // Managing a stack object through a pointer
  Cylinder* ptr_c1 = new Cylinder(10, 10);
  cout << "volume : " << ptr_c1->volume() << endl;

  delete ptr_c1;
  return 0;
}
