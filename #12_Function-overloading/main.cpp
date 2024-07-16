#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }

double max(double a, double b) { return (a > b) ? a : b; }

string_view max(string_view a, string_view b) { return (a > b) ? a : b; }

int main() {
  int int_value1{41};
  int int_value2{29};

  double double_value1{47.2};
  double double_value2{55.01};

  string_view first{"Hello"};
  string_view second{"World"};

  cout << "max ( " << int_value1 << ", " << int_value2
       << " ) : " << max(int_value1, int_value2) << endl;

  cout << "max ( " << 5 << ", " << 7 << " ) : " << max(5, 7) << endl;

  cout << "max ( " << double_value1 << ", " << double_value2
       << " ) : " << max(double_value1, double_value2) << endl;

  cout << "max ( " << first << ", " << second << " ) : " << max(first, second)
       << endl;

  cout << "max (dog, cat) : " << max("dog", "cat") << endl;

  return 0;
}
