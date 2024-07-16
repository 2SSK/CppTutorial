#include <bits/stdc++.h>
using namespace std;

/* NOTE:
 * Function : A resuable piece of code that can take a number of optional inputs
 *            and produce some desirable output
 */

// NOTE: Function that takes a single parameter, and doesn't give back the
// result explicitly
void enter_bar(int age) {
  if (age > 18) {
    cout << "You're " << age << " years old. Please proceed." << endl;
  } else {
    cout << "Sorry, you're too young for this. No offense!" << endl;
  }
}

// NOTE: Function that takes multiple parameters, and returns  the result of the
// computation
int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

// NOTE: Function that doesn't take parameters and returns nothing
void say_hello() {
  cout << "Hello, World!" << endl;

  // NOTE: You could omit this return statement for functions returning void
  return;
}

// NOTE: Function that takes no parameters and return something
int lucky_number() { return 99; }

int main() {
  enter_bar(20);

  cout << "Max of 10 and 20 is : " << max(10, 20) << endl;

  say_hello();

  cout << "Lucky Number : " << lucky_number() << endl;

  return 0;
}
