#include<iostream>
#include "animal.h"
#include "bird.h"
#include "cat.h"
#include "crow.h"
#include "dog.h"
#include "feline.h"
#include "pigeon.h"

int main() {
  std::cout << "Inheritance and polymorphism at different levels!" << std::endl << std::endl;

// Animal polymorphism 
  Dog dog1("dark gray", "dog1");
  Cat cat1("black stripes", "cat1");
  Pigeon pigeon1("white", "pigeon1");
  Crow crow1("dark", "crow1");

  Animal* animals[]{&dog1, &pigeon1, &cat1, &crow1};

  for (const auto& animal : animals) {
    animal->breathe();
  }

  std::cout << "__________________________" << std::endl;

  // Feline polymorphism
  Dog dog2("light gray", "dog2");
  Cat cat2("black stripes", "cat2");
  // Pigeon pigeon2("white", "pigeon2");

  Feline* felines[]{&dog2, &cat2/* , &pigeon2 */};

  for (const auto& feline : felines) {
    feline->run();
  }

  std::cout << "__________________________" << std::endl;

  // Bird polymorphism
  Pigeon pigeon3("white", "pigeon3");
  Crow crow2("dark", "crow2");

  Bird* birds[]{&pigeon3, &crow2};

  for (const auto& bird : birds) {
    bird->fly();
  }

  return 0;
}
