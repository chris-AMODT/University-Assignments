#include "Warrior.h"
#include <iostream>
Warrior::Warrior(std::string name) : Character(name, 100, 7) {
  std::cout << "Warrior Created";
}
