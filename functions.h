#include <chrono>
#include <cstdlib>
#include <iostream>
#include <thread>

void clearScreen() {
  // ANSI escape code to clear screen
  std::cout << "\033[2J\033[1;1H";
  system("cls");
}

void printWithDelay(const std::string &text, int time) {
  for (int i = 0; i < text.length(); i++) {
    std::cout << text[i] << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(time));
  }
}
