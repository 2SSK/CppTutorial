#include<bits/stdc++.h>
#include "person.h"
#include "player.h"
#include "nurse.h"
#include "engineer.h"

int main(){
  std::cout << "Base Class access specifier!" << std::endl << std::endl;

  Person person1{"SSK", 21, "kali pahadi, sunsan chauraha"};
  std::cout << "person1 : " << person1 << std::endl;

  std::cout << "___________________" << std::endl << std::endl;

  Player player1;
  player1.m_full_name = "Adolf Hitler";

  std::cout << "player1 : " << player1 << std::endl;

  std::cout << "___________________" << std::endl << std::endl;

  Nurse nurse1;
  // nurse1.m_full_name = "Nightingale";  : Compiler error
  std::cout << "nurse1 : " << nurse1 << std::endl;

  std::cout << "___________________" << std::endl << std::endl;

  Engineer engineer1;
  // engineer1.m_full_name = "Nikola Tesla"; : Compiler error
  std::cout << "engineer1 : " << engineer1 << std::endl;

  return 0;
}
