#include<iostream>
#include "parent.h"
#include "child.h"

int main(){
  std::cout << "Reused Symbols in inheritance!" << std::endl << std::endl;

  // Parent p1;
  // p1.print_var();

  Child c1;
  // c1.print_var();
  c1.show_values();

  return 0;
}
