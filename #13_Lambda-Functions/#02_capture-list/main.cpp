#include <bits/stdc++.h>
using namespace std;

int main() {
  // NOTE: Capture lists
  double a{10};
  double b{20};

  auto func = [a, b]() { cout << "a + b : " << a + b << endl; };
  func();

  int c{42};

  auto func1 = [c]() { cout << "Inner value : " << c << endl; };

  for (size_t i{}; i < 5; ++i) {
    cout << "Outer value : " << c << endl;
    func1();
    ++c;
  }

  return 0;
}
