#include <bits/stdc++.h>
using namespace std;

#include "sskFunc.h"

/*
 * NOTE: One Definition Rule :
 *       - The same function implementation can't show up in the global
 *         namespace more than once.
 *
 * NOTE: The linker searches for definitions in all translation units (.cpp)
 *       files in the project. Doesn't have to live in a .cpp file with the same
 *       name as header.
 */

int main() {
  int a{}, b{};

  cout << endl << "Enter two numbers : ";
  cin >> a >> b;

  int newNum = inc(a, b);
  int minNum = min(a, b);
  int maxNum = max(a, b);
  int productNum = product(a, b);

  cout << endl << "Add : " << newNum << endl;
  cout << "Min : " << minNum << endl;
  cout << "Max : " << maxNum << endl;
  cout << "Mul : " << productNum << endl;

  return 0;
}
