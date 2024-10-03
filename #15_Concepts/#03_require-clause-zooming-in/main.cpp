#include<bits/stdc++.h>
using namespace std;

/* The requires clause can take in four kinds of requirements:
 * 1. Simple requirements
 * 2. Nested requirements
 * 3. Compound requirements
 * 4. Type requirements
 */

template <typename T>
concept TinyType = requires (T t) {
// Simple requirement : Only enforces syntax
sizeof(T) <= 4; 
// Nested requirement : Requires another concept
requires sizeof(T) <= 4;
};

TinyType auto tadd(TinyType auto a, TinyType auto b){
  return a + b;
}

// Compound requirement
template <typename T>
concept Addable = requires (T a, T b) {
  // noexcept is optional
  {a + b} -> convertible_to<int>;  // Compund requirement
  // Checks if a + b is valid syntax, doesn't throw exceptions(optional), 
  // and the result if convertible to int (optional)
};

Addable auto add(Addable auto a, Addable auto b){
  return a + b;
}

int main(){
  cout << "Clause Zooming in!" << endl << endl;

  char x{67};
  char y{56};

  auto result = add(x, y);

  cout << "result : " << result << endl;
  cout << "sizeof(result) : " << sizeof(result) << endl;

  return 0;
}
