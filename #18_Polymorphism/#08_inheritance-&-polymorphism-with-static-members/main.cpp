#include<iostream>
#include "ellipse.h"

int main(){
  std::cout << "Inheritance and polymorphism with static members!" << std::endl << std::endl;

  // Shape
  Shape s1("shape1");
  std::cout << "shape count : " << Shape::m_count << std::endl;

  Shape s2("shape2");
  std::cout << "shape count : " << Shape::m_count << std::endl;

  Shape s3("shape3");
  std::cout << "shape count : " << Shape::m_count << std::endl;

  std::cout << "****************************************" << std::endl;

  // Ellipse
  Ellipse e1(10, 12, "ellipse1");

  std::cout << "shape count : " << Shape::m_count << std::endl;
  std::cout << "ellipse count : " << Ellipse::m_count << std::endl;

  std::cout << "****************************************" << std::endl;

  Ellipse e2(10, 12, "ellipse2");

  // Shape polymorphism
  Shape* shapes[] {&s1, &e1};

  for(auto& shape : shapes){
    std::cout << "count : " << shape->get_count() << std::endl;
  }

  return 0;
} 
