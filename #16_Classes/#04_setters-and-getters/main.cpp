#include<bits/stdc++.h>
using namespace std;

//  NOTE: Methods to read or modify member variables of a class 

const double PI{3.14159};

class Cylinder {
private:
  double base_radius{1.0};
  double height{1.0};
public:
  Cylinder() = default;

  void set_base_radius(double r){
    base_radius = r;
  } 

  void set_height(double h){
    height = h;
  }

  double get_base_radius(){
    return base_radius;
  }

  double get_height(){
    return height;
  }

  double volume(){
    return PI * base_radius * base_radius * height;
  }

  void output(){
    cout << "Radius : " << get_base_radius() << endl;
    cout << "Height : " << get_height() << endl;
    cout << "Volume : " << volume() << endl << endl;
  }
};

int main(){
  cout << "Getters and setters in Classes!" << endl << endl;
  Cylinder c1;
  c1.output();

  c1.set_base_radius(3);
  c1.set_height(2);
  c1.output();

  return 0;
}
