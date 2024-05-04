#include "Brutus.h"
#include "Jenn.h"
#include "mainCharacter.h"
#include <iostream>
#include <string>

int main() {
  int characterChoice;
  mainCharacter maincharacter;
  std::string characterName;
  Brutus brutus;
  Jenn jenn;

  std::cout << "Welcome to text game select your character" << std::endl;
  std::cout << "1. Brutus\n2.Jenn" << std::endl;
  std::cin >> characterChoice;

  switch (characterChoice) {
  case 1:
    maincharacter = brutus;
    characterName = "Brutus";
    std::cout << "You are know playing as Brutus" << std::endl;
    break;
  case 2:
    maincharacter = jenn;
    characterName = "Jenn";
    std::cout << "You are now playing as Jenn" << std::endl;
    break;
  }

  std::cout << "Welcome " << characterName << std::endl;
  return 0;
}
