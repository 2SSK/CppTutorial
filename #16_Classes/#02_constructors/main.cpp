#include<bits/stdc++.h>
using namespace std;

const double PI{ 3.14159 };

/* NOTE:
 * A special kind of method that is called when an instance of a class is created 
 *  - No return type
 *  - Same name as the class
 *  - Can have parameters. Can also have an empty parameter list
 *  - Usually used to initialize member variables of a class
 */

class Cylinder {
private:
  double base_radius{};
  double height{};
public:
  Cylinder(): base_radius{1.0}, height{1.0} {};
  Cylinder(double r, double h): base_radius{r}, height{h} {};

  double volume(){
    return PI * base_radius * base_radius * height;
  }

  void output(){
    cout << "Radius : " << base_radius << endl;
    cout << "Height : " << height << endl;
    cout << "Volume : " << volume() << endl << endl;
  }
};

int main(){
  cout << "Constructors in Classes!" << endl << endl;

  Cylinder c1(3, 1);
  c1.output();

  Cylinder c2;
  c2.output();

  return 0;
}
