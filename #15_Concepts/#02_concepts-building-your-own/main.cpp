#include<bits/stdc++.h>
using namespace std;

// Syntax 1 
template <typename T>
concept MyIntegral = std::is_integral_v<T>;

// Syntax 2
template <typename T>
concept Multipliable = requires(T a, T b) {
  a * b;  // Just makes sure the syntax is valid
};

// Syntax 3
template <typename T> 
concept Incrementable = requires(T a) {
  a += 1;
  ++a; 
  a++;
};


template <typename T>
T prod(T a, T b) requires Multipliable<T> {
  return a * b;
}

template <typename T>
T icc(T a) requires Incrementable<T> {
  return a + 1;
}


int main(){
  cout << "Building your own concepts!"<< endl;

  auto product = prod(10, 20);
  cout << "product: " << product << endl;

  cout << "Incrementing a number: " << icc(10) << endl;

  return 0;
}
