#include <bits/stdc++.h>
using namespace std;

/*
 * Pillars of any loop
 *   - Iterator
 *   - Starting Point
 *   - Test (controls when the loop stops)
 *   - Increment (or decrement)
 *   - Loop body
 */

int main() {
  // For loop
  for (int i = 1; i <= 10; ++i) {
    cout << i << ": I love C++" << endl;
  }

  cout << "Loop 1 done" << endl;

  for (size_t i{}; i < 5; i++) {
    cout << "Single statement in body. Can leave out {} on loop body" << endl;
  }

  cout << "Loop 2 done" << endl;

  cout << "size of (size_t) : " << sizeof(size_t) << endl;

  return 0;
}
