#include<bits/stdc++.h>
using namespace std;

const double PI{3.14159};

class Cylinder {
private:
  double base_radius{1.0};
  double height{1.0};
public:
  // Default Constructor
  Cylinder() = default;

  // Parameterized Constructor
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
  cout << "Default Constructors!" << endl << endl;

  Cylinder c1;
  c1.output();

  Cylinder c2(3, 1);
  c2.output();

  return 0;
}
