#include <bits/stdc++.h>
using namespace std;

int main() {

  // Nested if-else condtions
  bool red{false};
  bool green{true};
  bool yellow{false};
  bool police_stop{true};

  cout << endl;
  cout << "Nested if-else conditions : " << endl;
  cout << "Police officer stops(verbose)" << endl;

  if (green) {
    if (police_stop) {
      cout << "Stop" << endl;
    } else {
      cout << "Go" << endl;
    }
  }

  // nesting alternative using logical operator
  if (green && !police_stop) {
    cout << "Go" << endl;
  } else {
    cout << "Stop" << endl;
  }

  return 0;
}
