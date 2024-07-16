#include <bits/stdc++.h>
using namespace std;

/* NOTE: Lambda Functions :
 *      A Mechanism to set up anonymous functions (without names).
 *      Once we have them set up, we can either give them names and call them,
 *      or we can even get them to do things directly.
 */

auto func = []() { cout << "Hello, World!" << endl; };

// NOTE: Lambda function that returns something
auto result = [](double a, double b) -> double { return (a + b); };

int main() {
  // NOTE: Calling lambda function
  func();

  // NOTE: Calling lambda fucntion directly
  []() { cout << "Hello, World!" << endl; }();

  // NOTE: Lambda function that takes parameters
  [](double a, double b) { cout << "a + b : " << (a + b) << endl; }(12.1, 5.7);

  cout << "result : " << result(12.1, 5.7) << endl;

  int arr[5]{1, 2, 3, 4, 5};

  auto printArr = [](int arr[], int size) {
    for (int i{0}; i < size; i++) {
      cout << arr[i] << " ";
    }
  };

  printArr(arr, 5);
  cout << endl;
  printArr(arr, 4);
  cout << endl;
  printArr(arr, 3);
  cout << endl;
  printArr(arr, 2);
  cout << endl;
  printArr(arr, 1);

  cout << endl;
  return 0;
}
