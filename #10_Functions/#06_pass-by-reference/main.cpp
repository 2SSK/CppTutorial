#include <bits/stdc++.h>
using namespace std;

void say_age(int &age);

int main(int argc, char **argv) {
  int age{23};

  cout << "age - before : " << age << endl;
  say_age(age);
  cout << "age - after : " << age << endl;

  return 0;
}

void say_age(int &age) {
  ++age;
  cout << "Hello! You are " << age << " years old." << endl;
}
