#include <iostream>
#include "dog.h"

int main(){
  std::cout << "Dynamic_cast<>() !" << std::endl << std::endl;
  
  Animal* a1 = new Feline("stripes", "f1");

  std::cout << "______________________________" << std::endl;

  Feline* f1 = dynamic_cast<Feline*>(a1);

  if(f1){
    f1->do_some_feline_thingy();
  }else{
    std::cout << "Couldn't do the transformation from Animal to Dog" << std::endl;
  }

  std::cout << "Done!" << std::endl;

// Can do the transformation downstream for references
  // Base class reference
  Feline f2("spots", "f2");
  Animal& a2 = f2;

  // Calling non virtual methods on a2 won't work
  // a2.do_some_feline_thingy();

  Feline & f3 {dynamic_cast<Feline&>(a2)};
  f3.do_some_feline_thingy();

  std::cout << "Done!" << std::endl;

  delete a1;

  return 0;
}
