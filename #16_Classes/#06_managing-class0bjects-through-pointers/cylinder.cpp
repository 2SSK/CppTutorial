#include<iostream>
#include "cylinder.h"
using namespace std;

Cylinder::Cylinder(double r, double h): base_radius{r}, height{h} {};


void Cylinder::set_base_radius(double r){
  base_radius = r;
}

void Cylinder::set_height(double h){
  height = h;
}
double Cylinder::volume(){
  return 3.14159 * base_radius * base_radius * height;
}

void Cylinder::output(){
  cout << "Radius : " << get_base_radius() << endl;
  cout << "Height : " << get_height() << endl;
  cout << "Volume : " << volume() << endl << endl;
}
