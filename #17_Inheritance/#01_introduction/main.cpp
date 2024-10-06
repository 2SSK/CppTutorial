#include<bits/stdc++.h>
#include "player.h"
using namespace std;

/*  NOTE:
 *  - A defining  feature of Object Oriented Programming in C++
 *  - Building types on top of other types
 *  - Inheritance hierarchies can be set up to suit your needs 
 *  - Code reuse is improved
 */

int main(){
  cout << "Inheritance!" << endl;

  Player p1("Cricket");
  p1.set_first_name("Sachin");
  p1.set_last_name("Tendulkar");
  cout << p1 << endl;

  return 0;
}
