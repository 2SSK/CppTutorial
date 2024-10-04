#include<bits/stdc++.h>
#include "cylinder.h"
using namespace std;

int main(){
  cout << "Classes across multiple files!" << endl << endl;

  Cylinder c1;
  c1.output();

  c1.set_base_radius(3);
  c1.set_height(2);
  c1.output();

  return 0;
}
