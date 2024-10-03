#include<bits/stdc++.h>
using namespace std;

//  NOTE: Concepts can be combined with logical operators && and ||

template <typename T>
concept TinyType = requires (T t) {
sizeof(T) <= 4;
requires sizeof(T) <= 4;
};

template <typename T>
// requires integral<T> || floating_point<T>
requires integral<T> && TinyType<T>
T add(T a, T b){
  return a + b;
}

int main(){
cout << "Logical combinations of concepts!" << endl;

  int x{6};
  int y{4};

  auto result = add(x, y);

  cout << "result : " << result << endl;

  return 0;
}
