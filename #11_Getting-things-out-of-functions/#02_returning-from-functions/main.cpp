#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b);

string add_strings(string str1, string str2);

int main() {
  int a{34};
  int b(26);

  int result = sum(a, b);
  cout << "Out : &result(int) : " << &result << endl;
  cout << "sum : " << result << endl;

  string str_result = add_strings("Hello", "World!");
  cout << "Out : &result(string) : " << &str_result << endl;
  cout << "str_result : " << str_result << endl;

  return 0;
}

int sum(int a, int b) {
  int result = a + b;
  cout << "In : &result(int) : " << &result << endl;
  return result;
}

string add_strings(string str1, string str2) {
  string result = str1 + str2;
  cout << "In : &result(string) : " << &result << endl;
  return result;
}
