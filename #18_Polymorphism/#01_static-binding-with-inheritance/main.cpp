#include<iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main(){
  std::cout << "Static binding with Inheritance!" << std::endl << std::endl;

  Shape s1("Shape1");
  // s1.draw();

  Oval o1(2.0, 3.5, "Oval1");
  // o1.draw();

  Circle c1(3.3, "Circle1");
  // c1.draw();

  // Base pointers
  Shape * shape_ptr = &s1;
  // shape_ptr->draw();

  shape_ptr = &o1;
  // shape_ptr->draw();

  // Base references
  Shape& shape_ref = c1;
  shape_ref.draw();

  return 0;
}
