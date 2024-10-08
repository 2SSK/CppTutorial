#include <bits/stdc++.h>
using namespace std;

/* NOTE:
 *  - Function templates are just blueprints. They're not real C++ code consumed
 *    by the compiler. The compiler generates real C++ code by looking at the
 *    arguments you call your function template with .
 *  - The real C++ function generated by  the ccompiler is called a template
 *    instance.
 *  - A template instance will be reused when a similar function call (argument
 *    types) is issued. No duplicates are generated by the compiler.
 */

template <typename T> T maximum(T a, T b) { return a > b ? a : b; }

int main() {
  cout << "max(int) (3, 5): " << maximum(3, 5) << endl;

  cout << endl << "max(double) (3.5, 5.5): " << maximum(3.5, 5.5) << endl;

  cout << endl << "max(char) (a, b): " << maximum('a', 'b') << endl;

  cout << endl
       << "max(string) (hello, world): " << maximum("hello", "world") << endl;

  return 0;
}
