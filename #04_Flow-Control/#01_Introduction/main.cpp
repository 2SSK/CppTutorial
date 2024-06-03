#include <bits/stdc++.h>
using namespace std;

// Do thing conditionally

int main() {
  // If clause
  int number1{55};
  int number2{60};

  bool result = (number1 < number2); // Expression yeilding the condition
  cout << endl << boolalpha << "result : " << result << endl;

  cout << endl;
  cout << "free standing if statement" << endl;

  if (result == true) {
    cout << number1 << " is less than " << number2 << endl;
  }

  if (!(result == true)) {
    cout << number1 << " is NOT less than " << number2 << endl;
  }

  // else clause
  cout << endl;
  cout << "using the else clause : " << endl;

  if (result == true) {
    cout << number1 << " is less than " << number2 << endl;
  } else {
    cout << number1 << " is NOT less than " << number2 << endl;
  }

  // Use expression as condition directly
  cout << endl;
  cout << "Using expression as condition : " << endl;

  if (number1 < number2) {
    cout << number1 << " is less than " << number2 << endl;
  } else {
    cout << number1 << " is NOT less than " << number2 << endl;
  }

  return 0;
}
