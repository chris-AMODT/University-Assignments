#include "Mage.h"
#include <iostream>
Mage::Mage(std::string name) : Character(name, 50, 10) {
  std::cout << "Mage Created";
}
