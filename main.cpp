#include "Brutus.h"
#include "Jenn.h"
#include "mainCharacter.h"
#include "town.h"
#include <chrono> // For std::chrono
#include <cstdlib>
#include <iostream>
#include <string>
#include <thread> // For std::this_thread

int main() {
  int characterChoice;
  mainCharacter *maincharacter = nullptr;
  std::string characterName;
  int mill = 30;

  std::cout << "Welcome to text game select your character" << std::endl;
  std::cout << "1. Brutus\n2.Jenn" << std::endl;
  std::cin >> characterChoice;

  clearScreen();
  switch (characterChoice) {
  case 1:
    maincharacter = new Brutus();
    characterName = "Brutus";
    std::cout << "You are know playing as Brutus" << std::endl;
    break;
  case 2:
    maincharacter = new Jenn();
    characterName = "Jenn";
    std::cout << "You are now playing as Jenn" << std::endl;
    break;
  }

  std::this_thread::sleep_for(std::chrono::milliseconds(1000));

  std::cout << "Welcome " << characterName << std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(1000));

  clearScreen();
  std::string introText =
      "You wake up alone you look around you and you see nothing "
      "but woods you start to look around but you see no one.\nYou are "
      "Alone\nYou decide to walk around and see if you can find anyone\nas you "
      "stumble around you see in front of you a bear";

  printWithDelay(introText, 30);

  std::cout << std::endl;
  std::cout << "\nWhat do you do?\n1.Attack\n2.Run away" << std::endl;
  std::cin >> characterChoice;

  switch (characterChoice) {
  case 1:
    clearScreen();
    std::cout << "You try and attack but die bravely" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    return 0;
  case 2:
    clearScreen();
    std::cout << "You escape" << std::endl;
    std::this_thread::sleep_for((std::chrono::milliseconds(1000)));
    break;
  default:
    clearScreen();
    std::cout << "Pick again" << std::endl;
  }
  std::this_thread::sleep_for((std::chrono::milliseconds(2)));
  clearScreen();

  std::string place = "You manage to escape and as you wonder you see a "
                      "\ntown in the distance"
                      "\nwhat do you do?"
                      "\n1.Enter the town\n2.Continue Wondering the Forest";
  printWithDelay(place, mill);
  std::this_thread::sleep_for(std::chrono::nanoseconds(100));
  std::cout << std::endl;
  std::cin >> characterChoice;

  switch (characterChoice) {
  case 1:
    clearScreen();
    std::cout << "You begin walking into town" << std::endl;
    town();
    break;
  case 2:
    clearScreen();
    std::cout << "You continue wondering around the forest" << std::endl;
    break;
  }

  delete maincharacter;
  return 0;
}
