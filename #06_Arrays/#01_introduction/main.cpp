#include <bits/stdc++.h>
using namespace std;

int main() {
  // Declaring an array
  int scores[10]; // an array storing 10 integers

  // Assigning values
  for (int i = 0; i < 10; i++) {
    scores[i] = i * 3;
  }

  // Reading values
  cout << endl << endl << "Reading out score values (manually) : " << endl;
  cout << "scores[0] : " << scores[0] << endl;
  cout << "scores[1] : " << scores[1] << endl;

  // Lopping through the array
  cout << endl << "Reading out score values (using loop) : " << endl;
  for (int i = 2; i < 10; i++) {
    cout << "scores[" << i << "]" << " : " << scores[i] << endl;
  }

  /* If you don't intialize all the elements, those you leave out
   * are intialized to 0
   */
  cout << endl;
  cout << "Leaving out some elements un-initialized : " << endl;

  int families[5]{12, 7, 5};

  for (size_t i{0}; i < 5; i++) {
    cout << "families[" << i << "] : " << families[i] << endl;
  }

  return 0;
}
