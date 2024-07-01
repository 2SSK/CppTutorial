#include <bits/stdc++.h>
using namespace std;

int main() {
  // NOTE: Declaring std::string variables
  string full_name; // NOTE: Empty string
  string planet{
      "Earth. Where the sky is blue"}; // NOTE: Intialize with string literal
  string prefered_planet(planet); // NOTE: Initializ with other existing string

  // NOTE: Initialize with part of a string literal contains hello
  string mesage{"Hello", 5};

  // NOTE: Intialize with mulitple copies of a char contains eeee
  string weird_message(4, 'e');

  string greeting{"Hello, World!"};
  // NOTE: Initialize with part of an existing string from index 6 and 5
  // characters
  string saying_hello{greeting, 6, 5};

  cout << "full_name : " << full_name << endl;
  cout << "planet : " << planet << endl;
  cout << "prefered_planet : " << prefered_planet << endl;
  cout << "mesage : " << mesage << endl;
  cout << "weird_message : " << weird_message << endl;
  cout << "greeting : " << greeting << endl;
  cout << "saying_hello : " << saying_hello << endl;

  return 0;
}
