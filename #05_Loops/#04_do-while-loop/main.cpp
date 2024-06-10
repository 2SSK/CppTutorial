#include <bits/stdc++.h>
using namespace std;

// DO-While Loop : Runs the body then checks the condition

int main() {
  // Do-While loop
  const unsigned int count{10};

  size_t i{1}; // Initialization of Iterator

  do {
    cout << "Iteration : " << i << endl;
    i++; // Incrementation
  } while (i > count); // Condition

  return 0;
}
