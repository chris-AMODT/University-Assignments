#pragma once
#include "Character.h"
#include <string>
class Warrior : public Character {
public:
  Warrior(std::string);
  int attack() const;
  int specialAbility() const;
};
