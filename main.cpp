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

  std::cout << "\nYou wake up alone you look around you and you see nothing "
               "but woods you start to look around"
            << " but you see no one. \nYou are Alone\nYou decide to walk "
               "around and see if you can find anyone\nas you"
            << " stumble around you see in front of you a bear" << std::endl;

  std::cout << "What do you do?\n1.Attack\n2.Run away" << std::endl;
  std::cin >> characterChoice;

  switch (characterChoice) {
  case 1:
    std::cout << "You try and attack but die bravely" << std::endl;
    break;
  case 2:
    std::cout << "You escape" << std::endl;
    break;
  default:
    std::cout << "Pick again" << std::endl;
  }
  return 0;
}
