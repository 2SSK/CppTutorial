#include <bits/stdc++.h>
using namespace std;

/* NOTE:
 * The requires clause can take in four kinds of requirements :
 *  - Simple requirements
 *  - Nested requirements
 *  - Compound requirements
 *  - Type requirements
 */

// NOTE: Simple requirement
template <typename T>
concept TinyType = requires(T t) {
  sizeof(T) <= 4; // NOTE: Simple requirement : Only checks syntax
};

// NOTE: Nested requirement
template <typename T>
concept TinyTypeAgain = requires(T t) {
  sizeof(T) <= 4;          // NOTE: Simple requirement : Only checks syntax
  requires sizeof(T) <= 4; // NOTE: Nested requirement : checks the if the
                           //       expression is true
};

// NOTE: Compound requirement
template <typename T>
concept Addable = requires(T a, T b) {
  // NOTE: noexcept is optional
  { a + b } noexcept -> std::convertible_to<int>; // NOTE: Compound requirement
};

int main() {
  string name{"SAURAV"};

  for (auto ch : name) {
    cout << ch << " ";
  }

  cout << endl;
  return 0;
}
