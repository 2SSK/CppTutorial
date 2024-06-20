#include <bits/stdc++.h>
using namespace std;

int main() {
  // Non const reference
  cout << endl << "Non const reference : " << endl;
  int age{27};
  int &ref_age{age};

  cout << "age : " << age << endl;
  cout << "ref_age : " << ref_age << endl;

  // Can modify original variable through reference
  cout << endl << "Modify original variable through reference : " << endl;

  ref_age++; // Modify through reference

  cout << "age : " << age << endl;
  cout << "ref_age : " << ref_age << endl;

  // Duplicate const reference behavior with pointers

  const int *const const_ptr_to_const_age{&age};

  // *const_ptr_to_const_age = 32; // Error

  return 0;
}
