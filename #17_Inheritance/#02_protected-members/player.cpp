#include"person.h"
#include"player.h"

Player::Player(std::string_view game_param, std::string_view fn, std::string_view ln): m_game{ game_param } {
  this->first_name = fn;
  this->last_name = ln;
}

std::ostream& operator<<(std::ostream& out, const Player& player){
  out << "Player : [ game : " << player.m_game << ", name : " << player.first_name << " " << player.last_name << "]";
  return out;
}
