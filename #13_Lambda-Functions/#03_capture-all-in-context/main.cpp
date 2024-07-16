#include <bits/stdc++.h>
using namespace std;

/* NOTE: Lambda function signature :
 *       [capture list] (paramters) ->return type {
 *          // Function body
 *       }
 */

int main() {
  int c{42};

  // NOTE: Capturing everything by value
  auto func = [=]() { cout << "Inner value : " << c << endl; };

  for (size_t i{}; i < 5; ++i) {
    cout << "Outer value : " << c << endl;
    func();
    ++c;
  }

  cout << "\n-----------------" << endl;
  c = 42;

  // NOTE: Capturing everything by reference
  auto func1 = [&]() { cout << "Inner value : " << c << endl; };
  for (size_t i{}; i < 5; ++i) {
    cout << "Outer value : " << c << endl;
    func1();
    ++c;
  }

  return 0;
}
