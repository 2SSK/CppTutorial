#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main(){
  std::cout << "Overloading!" << std::endl << std::endl;

  Shape * shape_ptr = new circle(10, "Circle1");
  shape_ptr->draw(45, "Red");

  return 0;
}
