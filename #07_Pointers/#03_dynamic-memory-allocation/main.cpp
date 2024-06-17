#include <bits/stdc++.h>
using namespace std;

int main() {
  int number{22};
  int *p_number = &number;

  cout << endl;
  cout << "Declaring pointer and assigning address : " << endl;
  cout << "Number : " << number << endl;
  cout << "Pointer : " << p_number << endl;
  cout << "&number : " << &number << endl;
  cout << "*p_number : " << *p_number << endl;

  int *p_number1; // Unitilized pointer, contains junk address
  int number1{12};
  p_number1 = &number1; // Make it point ot a valid address
  cout << endl;
  cout << "Unitilized pointer : " << endl;
  cout << "*p_number1 : " << *p_number1 << endl;

  /*
   * Initialize the pointer with dynamic memory. Dynamically allocate memory at
   * run time and make  apointer point to it.
   */

  int *p_number4 = {nullptr};
  p_number4 = new int;

  /*
   * Dynamically allocate space for a single int on the heap this memory belongs
   * to our program from now on. THe system can't use it for anything else,
   * untill we return it. After this line executes, we will have a valid memory
   * location allocated. The size of the allocated memory will be such that it
   * can store the type pointed to by the pointer.
   */

  *p_number4 = 77; // Writing inot dynamically allocated memory
  cout << endl;
  cout << "Dynamically allocating memory : " << endl;
  cout << "*p_number4 : " << *p_number4 << endl;

  // Releasing and resetting the memory
  delete p_number4;
  p_number4 = nullptr;

  /*
   * It is also possible to intialize the pointer with a valid
   * address up on declaration. Not with a nullptr
   */

  int *p_number5{new int};     // Memory location contains junk value
  int *p_number6{new int(22)}; // use direct initialization
  int *p_number7{new int(23)}; // use uniform initialization

  cout << endl;
  cout << "Initialize with valid memory address at declaration : " << endl;
  cout << "p_number5 : " << p_number5 << endl;
  cout << "*p_number5 : " << *p_number5 << endl;

  cout << endl << "p_number6 : " << p_number6 << endl;
  cout << "*p_number6 : " << *p_number6 << endl;

  cout << endl << "p_number7 : " << p_number7 << endl;
  cout << "*p_number7 : " << *p_number7 << endl;

  // Releasing and resetting the memory
  delete p_number5;
  delete p_number6;
  delete p_number7;

  p_number5 = nullptr;
  p_number6 = nullptr;
  p_number7 = nullptr;

  return 0;
}
