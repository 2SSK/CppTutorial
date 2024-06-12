#include <bits/stdc++.h>
using namespace std;

int main() {
  int scores[]{10, 12, 15, 11, 18, 17, 22, 23, 24};

  // ====== Old way to find out size of array ======
  cout << "size of scores : " << sizeof(scores) << endl;
  cout << "size of scores[0] : " << sizeof(scores[0]) << endl;
  cout << "store item count : " << (sizeof(scores) / sizeof(scores[0])) << endl;

  size_t count{sizeof(scores) / sizeof(scores[0])};

  cout << endl << "Printing out array items : " << endl << endl;
  for (size_t i{0}; i < count; i++) {
    cout << "scores[" << i << "] : " << scores[i] << endl;
  }

  // ====== New way to find out size of array ======
  // Can get the size wiht std::size
  cout << endl << "scores size: " << size(scores) << endl << endl;

  // Print data out
  for (int i{0}; i < size(scores); ++i) {
    cout << "scores[" << i << "] : " << scores[i] << endl;
  }

  return 0;
}
