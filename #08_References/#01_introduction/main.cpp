#include <bits/stdc++.h>
using namespace std;

int main() {
  int int_value{45};
  double double_value{33.65};

  int &reference_to_int_value_1{int_value};  // Assign throught initialization
  int &reference_to_int_value_2 = int_value; // Assign throught assignment
  double &reference_to_double_value_1{double_value};

  // You have declared and initialize in one statement
  // int &some_reference; // Error : Must be initialized

  cout << "int_value : " << int_value << endl;
  cout << "double_value : " << double_value << endl;
  cout << "reference_to_int_value_1 : " << reference_to_int_value_1 << endl;
  cout << "reference_to_int_value_2 : " << reference_to_int_value_2 << endl;
  cout << "reference_to_double_value_1 : " << reference_to_double_value_1
       << endl;
  cout << "&int_value : " << &int_value << endl;
  cout << "&double_value : " << &double_value << endl;
  cout << "&reference_to_int_value_1 : " << &reference_to_int_value_1 << endl;
  cout << "&reference_to_int_value_2 : " << &reference_to_int_value_2 << endl;
  cout << "&reference_to_double_value_1 : " << &reference_to_double_value_1
       << endl;
  cout << "sizeof(int) : " << sizeof(int) << endl;
  cout << "sizeof(int&) : " << sizeof(int &) << endl;
  cout << "sizeof(reference_to_int_value_1) : "
       << sizeof(reference_to_int_value_1) << endl;

  // Modifying  through reference : changes reflect to the original variable
  cout << endl;
  cout << "Modifying data : " << endl;

  reference_to_int_value_1 = 55;

  // Modifying data directly : changes reflect to the reference variable
  double_value = 9.99;

  cout << "\nint_value : " << int_value << endl;
  cout << "double_value : " << double_value << endl;
  cout << "reference_to_int_value_1 : " << reference_to_int_value_1 << endl;
  cout << "reference_to_int_value_2 : " << reference_to_int_value_2 << endl;
  cout << "reference_to_double_value_1 : " << reference_to_double_value_1
       << endl;
  cout << "&int_value : " << &int_value << endl;
  cout << "&double_value : " << &double_value << endl;
  cout << "&reference_to_int_value_1 : " << &reference_to_int_value_1 << endl;
  cout << "&reference_to_int_value_2 : " << &reference_to_int_value_2 << endl;
  cout << "&reference_to_double_value_1 : " << &reference_to_double_value_1
       << endl;
  cout << "sizeof(int) : " << sizeof(int) << endl;
  cout << "sizeof(int&) : " << sizeof(int &) << endl;
  cout << "sizeof(reference_to_int_value_1) : "
       << sizeof(reference_to_int_value_1) << endl;

  return 0;
}
