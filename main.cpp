#include "Brutus.h"
#include "Jenn.h"
#include "mainCharacter.h"
#include <chrono> // For std::chrono
#include <cstdlib>
#include <iostream>
#include <string>
#include <thread> // For std::this_thread

void clearScreen() {
  // ANSI escape code to clear screen
  std::cout << "\033[2J\033[1;1H";
  system("cls");
}

// Function to print text with a delay between characters
void printWithDelay(const std::string &text, int milliseconds) {
  for (char c : text) {
    std::cout << c << std::flush; // std::flush ensures immediate output
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
  }
}

int main() {
  int characterChoice;
  mainCharacter maincharacter;
  std::string characterName;
  Brutus brutus;
  Jenn jenn;

  std::cout << "\nWelcome to text game select your character" << std::endl;
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

  clearScreen();
  std::string introText =
      "\nYou wake up alone you look around you and you see nothing "
      "but woods you start to look around but you see no one.\nYou are "
      "Alone\nYou decide to walk around and see if you can find anyone\nas you "
      "stumble around you see in front of you a bear";

  printWithDelay(introText, 30);

  std::cout << "\nWhat do you do?\n1.Attack\n2.Run away" << std::endl;
  std::cin >> characterChoice;

  switch (characterChoice) {
  case 1:
    clearScreen();
    std::cout << "You try and attack but die bravely" << std::endl;
    return 0;
  case 2:
    clearScreen();
    std::cout << "You escape" << std::endl;
    break;
  default:
    clearScreen();
    std::cout << "Pick again" << std::endl;
  }

  clearScreen();

  std::cout << "\nYou manage to escape and as you wonder you see the town from "
               "this distance"
            << " the town looks abbandoned\nWhat do you do?" << std::endl;
  std::cout << "1.Enter the town\n2.Continue Wondering the Forest" << std::endl;
  std::cin >> characterChoice;

  switch (characterChoice) {
  case 1:
    std::cout << "You chose 1" << std::endl;
    break;
  case 2:
    std::cout << "You chose 2" << std::endl;
    break;
  }

  return 0;
}
