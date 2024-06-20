#include <bits/stdc++.h>
using namespace std;

int main() {
  // Declare pointer and reference
  double double_value{12.34};

  double &ref_double_value{double_value}; // REference to double_value
  double *p_double_value{&double_value};  // Pointer to double_value

  // Reading
  cout << "double_value : " << double_value << endl;
  cout << "ref_double_value : " << ref_double_value << endl;
  cout << "p_double_value : " << p_double_value << endl;
  cout << "*p_double_value : " << *p_double_value << endl;

  // Writting through pointer
  cout << endl;
  cout << "Writing through pointer : " << endl;

  *p_double_value = 15.44;

  cout << "double_value : " << double_value << endl;
  cout << "ref_double_value : " << ref_double_value << endl;
  cout << "p_double_value : " << p_double_value << endl;
  cout << "*p_double_value : " << *p_double_value << endl;

  // Writing through reference
  cout << endl;
  cout << "Writing through reference : " << endl;

  ref_double_value = 18.44;

  cout << "double_value : " << double_value << endl;
  cout << "ref_double_value : " << ref_double_value << endl;
  cout << "p_double_value : " << p_double_value << endl;
  cout << "*p_double_value : " << *p_double_value << endl;

  return 0;
}
