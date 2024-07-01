#include <bits/stdc++.h>
using namespace std;

int main() {
  // NOTE: Concatenation
  cout << endl;
  cout << "std::strcat : " << endl;

  char dest[50] = "Hello ";
  char src[50] = "World!";
  strcat(dest, src);
  strcat(dest, " Goodbye World!");

  cout << "dest : " << dest << endl;

  // NOTE: More Concatenation
  cout << endl;
  cout << "More std::strcat : " << endl;

  char *dest1 = new char[30]{'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', '\0'};
  char *source1 = new char[30]{',', 'T', 'h', 'e', ' ', 'p', 'h', 'e', 'n',
                               'i', 'x', ' ', 'K', 'i', 'n', 'g', '!', '\0'};

  cout << "std::strlen(dest1) : " << strlen(dest1) << endl;
  cout << "std::strlen(source1) : " << strlen(source1) << endl;

  cout << "Concatenating..." << endl;
  strcat(dest1, source1);

  cout << "std:strlen(dest1) : " << strlen(dest1) << endl;
  cout << "dest1 : " << dest1 << endl;

  // NOTE: std::strncat : Concatenating n characters
  cout << endl;
  cout << "std::strncat : " << endl;
  char dest2[50]{"Hello "};

  char source2[30] = {"There is a bird on my window"};

  cout << strncat(dest2, source2, 6) << endl;

  cout << "The concatenated string is : " << dest2 << endl;

  // NOTE: std::strcpy : Copying  characters
  cout << endl;
  cout << "std::strcpy : " << endl;
  const char *source3 = "C++ is a multipurpose porgramming language";
  char *dest3 =
      new char[strlen(source3) + 1]; // +1 for the null character Contains
                                     // garbage data Not initialized

  strcpy(dest3, source3);

  cout << "sizeof(dest3) : " << sizeof(dest3) << endl;
  cout << "std::strlen(dest3) : " << strlen(dest3) << endl;
  cout << "dest3 : " << dest3 << endl;

  // std::strncpy : Copying n characters
  cout << endl;
  cout << "std::strncpy : " << endl;
  const char *source4 = "Hello";
  char dest4[] = {'a', 'b', 'c', 'd',
                  'e', 'f', '\0'}; // have to put the terminating null char if
                                   // we want to print

  cout << "dest4 : " << dest4 << endl;
  cout << "Copying..." << endl;
  strncpy(dest4, source4, 5);

  cout << "dest4 : " << dest4 << endl;

  return 0;
}
