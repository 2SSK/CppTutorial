#include <bits/stdc++.h>
using namespace std;

/* NOTE:
 * One definition rule : context
 *  - Free standing variables
 *  - Functions
 *  - Classes
 *  - Class member functions
 *  - Class static member variables
 */

class Person {
private:
  string full_name;
  int age;

public:
  Person(const string &name, int age) : full_name{name}, age{age} {
    print_info();
  }

  void print_info() const {
    cout << "name : " << full_name << ", age : " << age << endl;
  }
};

int main() {
  Person person1{"John Doe", 30};

  return 0;
}
