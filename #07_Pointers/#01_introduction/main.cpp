#include <bits/stdc++.h>
using namespace std;

int main() {
  // Declaring pointers
  int *p_number{}; // can only sotre an address of a variable of type int
  double *p_fractional_number{}; // can only store an address of a variable of
                                 // type double

  // Explicitely initialize to nullptr
  int *p_number1{nullptr};
  double *p_fractional_number1{nullptr};

  // All pointers variables have same size
  cout << "Size of number pointer : " << sizeof(p_number) << endl;
  cout << "Size of fractional_number pointer : " << sizeof(p_fractional_number)
       << endl;
  cout << "Size of number1 pointer : " << sizeof(p_number1) << endl;
  cout << "Size of fractional_number1 pointer : "
       << sizeof(p_fractional_number1) << endl;
  cout << "size of int : " << sizeof(int) << endl;
  cout << "size of double : " << sizeof(double) << endl << endl;

  // Initializing pointers and assigning them values
  int int_var{43};
  int *p_int{&int_var}; // The address of variables

  cout << "Int var : " << int_var << endl;
  cout << "p_int (Address in memory) : " << p_int << endl;
  cout << "p_int (Address in memory) : " << *p_int << endl;

  // You can also change the address stored ina pointer any time
  int int_var1{65};
  int_var1 = 126;

  p_int = &int_var1; // Assign a different address to the pointer
  cout << "p_int (with different address) : " << p_int << endl;
  cout << "p_int (with different address) : " << *p_int << endl;

  // Defrencing a pointer
  int *p_int2{nullptr};
  int int_data{56};
  p_int2 = &int_data;

  cout << endl << "Value : " << *p_int2 << endl;

  return 0;
}
