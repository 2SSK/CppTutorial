#include <bits/stdc++.h>
using namespace std;

int main() {
  // Declare array
  char message[5]{'H', 'e', 'l', 'l', 'o'};

  // Print out the array through looping
  cout << "message : ";
  for (auto c : message) {
    cout << c;
  }
  cout << endl;
  cout << "size : " << size(message) << endl;

  // Can also modify  elements of the  char array
  cout << endl;
  cout << "Modified array data" << endl;

  message[1] = 'a';

  // Print out the array
  cout << endl << "message : ";
  for (auto c : message) {
    cout << c;
  }
  cout << endl;

  // Direct print out
  cout << endl << "message : " << message << endl;

  // Auto filled in null characters
  char message2[6]{'H', 'e', 'l', 'l', 'o'};

  cout << endl << "message2 : " << message2 << endl;
  cout << "size : " << size(message2) << endl;

  // Literal C-string
  // Can also define a leteral C string
  char message3[]{"Hello"};

  cout << endl << "message3 : " << message3 << endl;
  cout << "size : " << size(message3) << endl;

  // Can even hace spaecs between characters
  char message4[]{"Hello, world!"};
  cout << endl << "message4 : " << message4 << endl;
  cout << "size : " << size(message4) << endl;

  return 0;
}
