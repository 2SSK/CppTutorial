#include <bits/stdc++.h>

int main() {
  std::cout << "Hello";
  std::cout << "World";

  std::cout << std::endl;

  std::cout << "----------------" << std::endl;

  std::cout << "Hello" << std::endl;
  std::cout << "World" << std::endl;

  std::cout << std::endl;

  std::cout << "Hello\n";
  std::cout << "World\n";

  std::cout << std::endl;
  std::cout << "=================" << std::endl;

  std::cout << "Unformated table : " << std::endl << std::endl;
  std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
  std::cout << "Stanley" << " " << "Woods" << " 33" << std::endl;
  std::cout << "Jordan" << " " << "Parker" << " 45" << std::endl;
  std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
  std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
  std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;

  std::cout << std::endl;
  std::cout << "Formatted table : " << std::endl << std::endl << std::left;

  std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname"
            << std::setw(5) << "Age" << std::endl;
  std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray"
            << std::setw(5) << "25" << std::endl;
  std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods"
            << std::setw(5) << "33" << std::endl;
  std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker"
            << std::setw(5) << "45" << std::endl;
  std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5)
            << "21" << std::endl;
  std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr"
            << std::setw(5) << "27" << std::endl;
  std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson"
            << std::setw(5) << "29" << std::endl;

  return 0;
}
