#ifndef MAIN_CHARACTER_H
#define MAIN_CHARACTER_H
#include "hit_point_types.h"
#include <iostream>

class mainCharacter {
private:
  hp health;
  int attackPower;

public:
  mainCharacter();
  mainCharacter(int health, int attackPower);
  void attack();
  void defend();
  void runAway();
  int getHealth() const;
  int getAttackPower() const;
  void setHealth(hp newHealth);
  void setAttackPower(int newAttackPower);
};

mainCharacter::mainCharacter() {
  health = 100;
  attackPower = 50;
}

mainCharacter::mainCharacter(int health, int attackPower) {
  health = health;
  attackPower = attackPower;
}

void mainCharacter::attack() { std::cout << "You have attacked" << std::endl; }

void mainCharacter::defend() { std::cout << "You have defended" << std::endl; }

void mainCharacter::runAway() { std::cout << "You ran away" << std::endl; }

int mainCharacter::getHealth() const { return health; }
int mainCharacter::getAttackPower() const { return attackPower; }

void mainCharacter::setHealth(hp newHealth) {
  if (newHealth < 1) {
    newHealth = 0;
  } else {
    health = newHealth;
  }
}

void mainCharacter::setAttackPower(int newAttackPower) {
  attackPower = newAttackPower;
}

#endif
