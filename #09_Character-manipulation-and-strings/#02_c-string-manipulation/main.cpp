#include <bits/stdc++.h>
using namespace std;

int main() {
  // std::strlen : Find the length of a string
  const char message1[]{"The sky is blue."};

  // Array decays into pointer when we use const char*
  const char *message2{"The sky is blue."};
  cout << "message1 : " << message1 << endl;

  // strlen ignores null character
  cout << "strlen(message1) : " << strlen(message1) << endl;

  // Includes the null character
  cout << "sizeof(message1) : " << sizeof(message1) << endl;

  // strlen works with decayed arrays
  cout << "strlen(message2) : " << strlen(message2) << endl;

  // Prints size of pointer
  cout << "sizeof(message2) : " << sizeof(message2) << endl;

  /*
   * std::strcmp - signature : int strcmp( const char *lhs, const char *rhs );
   * Returns negative value if lhs appears before rhs in lexicographical order,
   * Zero if lhs and rhs compare equal.
   * and Positive value if lhs appears after rhs in lexicographical order.
   */
  cout << endl;
  cout << "std::strcmp : " << endl;
  const char *string_data1{"Alabama"};
  const char *string_data2{"Blabama"};

  // Print out the comparison
  cout << "std::strcmp (" << string_data1 << ", " << string_data2
       << ") : " << strcmp(string_data1, string_data2) << endl;

  string_data1 = "Alabama";
  string_data2 = "Alabamb";

  // Print out the comparison
  cout << "std::strcmp (" << string_data1 << ", " << string_data2
       << ") : " << strcmp(string_data1, string_data2) << endl;

  // First occurrence of a character
  cout << endl;
  cout << "std::strchr : " << endl;

  // we use std::strchr to find all the characters one by one

  const char *str{"Try not. DO, or do not. There is no try."};
  char target{'T'};
  const char *result{str};
  int iterations{};

  while ((result = strchr(result, target)) != nullptr) {
    cout << "Found '" << target << "' starting at : " << result << "'\n";
    ++result;
    ++iterations;
  }

  cout << "iterations : " << iterations << endl;

  // Find last occurence

  cout << endl;
  cout << "std::strrchr : " << endl;

  char input[] = "/home/user/hello.cpp";
  char *output = strrchr(input, '/');

  if (output)
    cout << output + 1 << endl;

  return 0;
}
