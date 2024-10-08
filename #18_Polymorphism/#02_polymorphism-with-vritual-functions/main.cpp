#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

void draw_shape(Shape * s){
  s->draw();
}

void draw_shape_v1(Shape& s){
  s.draw();
}

int main(){
  std::cout << "Polymorphism (dynamic binding) with virtual functions!" << std::endl << std::endl;

  Shape s1("Shape1");

  Oval o1(2.0, 3.5, "Oval1"); 

  Circle c1(3.3, "Circle1");

  Shape * shape_ptr = &s1;
  // shape_ptr->draw();

  shape_ptr = &o1;
  // shape_ptr->draw();

  shape_ptr = &c1;
  // shape_ptr.draw();

  // Base references
  Shape& shape_ref = c1;
  // shape_ref.draw();

  // draw_shape(&c1);
  // draw_shape(&o1);

  // draw_shape_v1(s1);

  shape_ptr = &o1;
  // shape_ptr->draw();
  // draw_shape(shape_ptr);

  Shape* shape_collection[]{&s1, &o1, &c1};

  for(Shape* s_ptr : shape_collection){
    s_ptr->draw();
  }

  return 0;
}
