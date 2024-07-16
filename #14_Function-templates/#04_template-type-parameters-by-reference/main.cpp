#include <bits/stdc++.h>
using namespace std;

// NOTE: Declaration of template function (parameter by Value)
template <typename T> T maximum(T a, T b);

// NOTE: Template with parameter by reference
template <typename T> const T &minimum(const T &a, const T &b);

int main() {
  double a{23.5};
  double b{51.2};

  cout << "Passed by value : " << endl;
  cout << "Out - &a: " << &a << endl;
  double max1 = maximum(a, b);
  cout << "max1 : " << max1 << endl;

  cout << endl << "Passed by reference : " << endl;
  cout << "Out - &a: " << &a << endl;
  double min1 = minimum(a, b);
  cout << "min1 : " << min1 << endl;

  return 0;
}

// NOTE: Body of template function
template <typename T> T maximum(T a, T b) {
  cout << "In - &a: " << &a << endl;
  return (a > b) ? a : b;
}

// NOTE: Body of minimum function
template <typename T> const T &minimum(const T &a, const T &b) {
  cout << "In - &a: " << &a << endl;
  return (a < b) ? a : b;
}
