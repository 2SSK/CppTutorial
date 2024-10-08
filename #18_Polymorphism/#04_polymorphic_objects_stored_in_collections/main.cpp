#include<iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main(){
  std::cout << "Polymorphic objects stored in collections!" << std::endl << std::endl;

  Circle c1(7.2, "Circle1");
  Oval o1(13.3, 1.2, "Oval1");
  Circle c2(11.2, "Circle2");
  Oval o2(31.3, 15.2, "Oval2");
  Circle c3(12.2, "Circle3");
  Oval o3(53.3, 9.2, "Oval3");

  Shape shapes1[] {c1, o1, c2, o2, c3, o3};

  for(Shape& s : shapes1){
    std::cout << "Inside array, sizeof(Shape) : " << sizeof(s) << std::endl;
    // s.draw();
    Shape* s_ptr = &s;
    s_ptr->draw();
    std::cout << std::endl;
  }

  return 0;
}
