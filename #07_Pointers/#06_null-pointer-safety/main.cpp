#include <bits/stdc++.h>
using namespace std;

// Make sure you are working with pointers containing valid memory addresses

int main() {
  // Verbose nullptr check
  int *p_number{}; // Initialized to nullptr

  if (!(p_number == nullptr)) {
    cout << "p_number points to a VALID address : " << p_number << endl;
  } else {
    cout << "p_number points to an INVALID address." << endl;
  }

  // Compact nullptr check
  if (p_number) {
    cout << "p_number points to a VALID address : " << p_number << endl;
  } else {
    cout << "p_number points to an INVALID address." << endl;
  }

  // Calling delete on a nullptr is OK
  int *p_number1{};

  delete p_number1; // This won't cause any problem if p_number1 is contains
                    // nullptr

  // So no need to overdo something like
  if (p_number1) {
    delete p_number1;
    p_number1 = nullptr;
  }

  return 0;
}
