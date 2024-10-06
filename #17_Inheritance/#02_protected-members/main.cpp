#include<bits/stdc++.h>
#include "player.h"

int main(){
  std::cout << "Protected Members!" << std::endl << std::endl;

  Player p1("Cricket", "Virat", "kohli");
  std::cout << p1 << std::endl;

  Player p2("Football", "Leon", "Messi");
  std::cout << p2 << std::endl;

  Player p3("Basketball", "Kobe", "Bryant");
  std::cout << p3 << std::endl;

  return 0;
}

