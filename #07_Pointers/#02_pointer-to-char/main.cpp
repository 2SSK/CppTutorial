#include <bits/stdc++.h>
using namespace std;

int main() {
  /*
   * Can use normal poiinter to char like we've been doing
   * for double, int and anything else really.
   */

  char *p_char_var{nullptr};
  char char_var{'A'};

  p_char_var = &char_var;

  cout << "The value stored in p_char_var : " << *p_char_var << endl;

  char char_var1{'C'};
  p_char_var = &char_var1;

  cout << "The value stored in p_char_var : " << *p_char_var << endl;

  /*
   * Pointer to char can also do something special.
   * You can ininitialize with a string literal : C-String
   */

  const char *p_message{"Hello World!"};

  cout << endl << "The message is : " << p_message << endl;

  cout << "The value stored at p_message : " << *p_message << endl;

  return 0;
}
