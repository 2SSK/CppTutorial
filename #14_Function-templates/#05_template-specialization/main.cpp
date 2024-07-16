#include "bits/stdc++.h"
using namespace std;

// NOTE: Function template
template <typename T> T maximum(T a, T b) { return (a > b) ? a : b; };

// NOTE: Template specialization
template <> const char *maximum<const char *>(const char *a, const char *b) {
  return (strcmp(a, b) > 0) ? a : b;
}

int main() {
  int a{10};
  int b{23};

  double c{34.7};
  double d{23.4};

  string e{"hello"};
  string f{"world"};

  int max_int = maximum(a, b);    // NOTE: int type  deduced
  int max_double = maximum(c, d); // NOTE: double type deduced
  string max_str = maximum(e, f); // NOTE: string type deduced

  const char *g{"wild"};
  const char *h{"animal"};

  cout << "max(const char*) : " << maximum(g, h) << endl;
  return 0;
}
