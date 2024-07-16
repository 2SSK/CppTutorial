#include <bits/stdc++.h>
using namespace std;

// NOTE: Function blueprint

template <typename T>

T maximum(T a, T b) {
  return a > b ? a : b;
}

int main() {
  cout << maximum(3, 5) << endl;
  cout << maximum(3.5, 5.5) << endl;
  cout << maximum('a', 'b') << endl;

  return 0;
}
