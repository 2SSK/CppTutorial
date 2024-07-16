#include <bits/stdc++.h>
using namespace std;

template <typename T> T maximum(T a, T b) { return a > b ? a : b; }

int main() {
  int a{10};
  int b{23};

  double c{34.7};
  double d{23.4};

  string e{"hello"};
  string f{"world"};

  maximum(a, b); // NOTE: int type deduced
  maximum(c, d); // NOTE: double type deduced
  maximum(e, f); // NOTE: string type deduced

  auto max1 = maximum<double>(a, b); // NOTE: double type explicitly specified
  auto max2 = maximum<double>(c, d); // NOTE: double type explicitly specified
  auto max3 = maximum<string>(e, f); // NOTE: string type explicitly specified

  cout << "maximum<double>(10, 23) : " << max1 << endl;
  cout << endl << "maximum<double>(34.7, 23.4) : " << max2 << endl;
  cout << endl << "maximum<string>(\"hello\", \"world\") : " << max3 << endl;

  return 0;
}
