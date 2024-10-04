#ifndef CYLINDER_H
#define CYLINDER_H

#include <iostream>
#include "constants.h"
using namespace std;

class Cylinder{
private:
  double base_radius{1.0};
  double height{1.0};

public:
  Cylinder() = default;
  Cylinder(double r, double h);

  double get_base_radius(){
    return base_radius;
  };

  double get_height(){
    return height;
  };

  void set_base_radius(double r);
  void set_height(double h);
  double volume();
  void output();
};


#endif 
