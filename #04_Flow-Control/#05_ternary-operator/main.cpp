#include <bits/stdc++.h>
using namespace std;

// Ternary expression
// result = (condition) ? option1 : option2;

int main() {
  int max{};

  int a{35};
  int b{20};

  max = (a > b) ? a : b;

  cout << endl << "max : " << max << endl;

  // Ternary Initialization
  cout << endl;
  cout << "speed" << endl;
  bool fast = false;

  int speed{fast ? 300 : 150};

  cout << "The speed is : " << speed << endl;

  return 0;
}
