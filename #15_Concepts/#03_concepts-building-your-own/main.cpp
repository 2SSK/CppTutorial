#include <bits/stdc++.h>
using namespace std;

/* NOTE: SYNTAX
 * i.   template <typename T>
 *      concept MyIntegral = std::is_integral_v<T>;
 * ii.  template <typename T>
 *      concept Mulitpliable = requires(T a, T b){
 *         a * b;
 *      }
 * iii. template <typename T>
 *      concept Incrementable = requires (T a){
 *         a += 1;
 *         ++a;
 *         a++;
 *      }
 */

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
  requires MyIntegral<T>
T add(T a, T b) {
  return a + b;
}

int main() {
  int x{6};
  int y{7};

  cout << "add(6,7) : " << add(x, y) << endl;

  return 0;
}
