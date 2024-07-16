#include <bits/stdc++.h>
using namespace std;

// NOTE: Declaration of function
void say_age(int age);

int main(int argc, char **argv) {
  int age{23};

  cout << "age - before : " << age << endl;
  say_age(age);
  cout << "age - after : " << age << endl;

  return 0;
}

// NOTE: Definition of function
void say_age(int age) {
  // NOTE: Changing the copy outside age is not affected
  ++age;
  cout << "Hello! You are " << age << " years old." << endl;
}
