#pragma once
#include "Character.h"
#include <string>
class Mage : public Character {
public:
  Mage(std::string);
  int attack() const;
  int specialAbility() const;
};
