#include "Archer.h"
#include <iostream>
#include <string>

Archer::Archer(std::string name) : Character(name, 8, 8) {
  std::cout << "Archer Created";
}
