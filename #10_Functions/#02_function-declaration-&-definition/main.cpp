#include <bits/stdc++.h>
using namespace std;

/* NOTE:
 * Parameters passed this are scoped locally in the function.
 * Changes to them not visible outside the function.
 * What we have inside the function are actually COPIES of the arguments passed
 * to the function.
 */

double increment_multiply(double a, double b) {
  cout << "Inside function, before increment : " << endl;
  cout << "a : " << a << endl;
  cout << "b : " << b << endl;

  double result = ((++a) * (++b));

  cout << "Inside function, after increment : " << endl;
  cout << "a : " << a << endl;
  cout << "b : " << b << endl;

  // NOTE: Returning result
  return result;
}

int main() {
  double x{10.0}, y{20.0};

  cout << "Before function call : " << endl;
  cout << "x : " << x << endl;
  cout << "y : " << y << endl;

  increment_multiply(x, y);

  cout << "After function call : " << endl;
  cout << "x : " << x << endl;
  cout << "y : " << y << endl;

  return 0;
}
