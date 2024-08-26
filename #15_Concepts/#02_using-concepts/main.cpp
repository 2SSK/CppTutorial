#include <bits/stdc++.h>
using namespace std;

/* NOTE: Syntax 1 :
 * template <typename T>
 * requires std::integral <T>
 * T add (T a, T b){
 *   return a + b;
 * }
 */

template <typename T> T add(T a, T b) { return a + b; }

int main() {
  int x{4}, y{3};

  cout << "add(4,3) : " << static_cast<int>(add(x, y)) << endl;

  cout << endl;
  return 0;
}
