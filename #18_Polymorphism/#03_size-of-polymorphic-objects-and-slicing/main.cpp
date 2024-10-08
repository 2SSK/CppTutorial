#include<iostream>
#include<iomanip>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main(){
  std::cout << "Size of polymorphic objects and slicing!" << std::endl << std::endl;

  std::cout << std::setw(18) << "sizeof(Shape) : " << sizeof(Shape) << std::endl;
  std::cout << std::setw(18) << "sizeof(Oval) : " << sizeof(Oval) << std::endl;
  std::cout << std::setw(18) << "sizeof(Circle) : " << sizeof(Circle) << std::endl;

  // slicing
  Circle c1(3.3, "Circle1");
  Shape s1 = c1;
  s1.draw();

  return 0;
}
