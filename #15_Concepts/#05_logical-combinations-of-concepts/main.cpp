#include <bits/stdc++.h>
using namespace std;

template <typename T>
concept TinyType = requires(T t) {
  sizeof(T) <= 4;
  requires sizeof(T) <= 4;
};

int main() {
  cout << endl;

  return 0;
}
