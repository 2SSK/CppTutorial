#include<bits/stdc++.h>
using namespace std;

const double PI{ 3.14159 };

/* NOTE:
 * Class member variables can either be raw stack variables or pointers
 * Members can't be references
 * Classes have funtions (methods) that let them do things
 * Class methods have access to the memeber variables, regardless of whether they are public or private
 * Private members of calsses (variables and functions) aren't accessible from the outside of the class definition
 */

class Cylinder {
private:
  double base_radius{1.0};
  double height{1.0};
public:
  double volume(){
    return PI * base_radius * base_radius * height;
  }

  void set_radius(double r){
    base_radius = r;
  }

  void set_height(double h){
    height = h;
  }

  void output(){
    cout << "Radius : " << base_radius << endl;
    cout << "Height : " << height << endl;
    cout << "Volume : " << volume() << endl << endl;
  }
};

int main(){
  cout << "Classes in C++!" << endl << endl;

  Cylinder c1;
  c1.set_radius(3);
  c1.set_height(1);
  c1.output();

  Cylinder c2;
  c2.output();


  return 0;
}
