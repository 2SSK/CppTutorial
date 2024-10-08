#include "animal.h"
#include "bird.h"
#include "cat.h"
#include "crow.h"
#include "dog.h"
#include "feline.h"
#include "pigeon.h"
#include "stream_insertable.h"
#include <iostream>
#include <memory>

class Point : public StreamInsertable {
public:
  Point() = default;
  Point(double x, double y) : m_x{x}, m_y{y} {}

  virtual void stream_insert(std::ostream &out) const override {
    out << "Point(" << m_x << ", " << m_y << ")";
  }

private:
  double m_x;
  double m_y;
};

int main() {
  std::cout << "Abstract class as interfaces!" << std::endl << std::endl;

  Point p1(10, 20);
  std::cout << "p1 : " << p1 << std::endl;

  std::cout << "__________________________________" << std::endl;

  std::unique_ptr<Animal> a0 = std::make_unique<Dog>("stripes", "dog1");
  std::cout << *a0 << std::endl;

  std::unique_ptr<Animal> a1 = std::make_unique<Bird>("white", "bird1");
  std::cout << *a1 << std::endl;

  std::cout << "__________________________________" << std::endl;

  std::shared_ptr<Animal> animals[]{
      std::make_shared<Dog>("stripes", "dog2"),
      std::make_shared<Cat>("black stripes", "cat2"),
      std::make_shared<Crow>("black wings", "crow1"),
      std::make_shared<Pigeon>("white wings", "pigeon1"),
  };

  std::cout << std::endl;
  std::cout << "Printing out animals array : " << std::endl;
  for (const auto &a : animals) {
    std::cout << *a << std::endl;
  }

  return 0;
}
