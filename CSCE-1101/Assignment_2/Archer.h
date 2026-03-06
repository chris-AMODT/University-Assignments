#pragma once
#include "Character.h"
#include <string>
class Archer : public Character {
public:
  Archer(std::string name);
  int attack() const;
  int specialAbility() const;
};
