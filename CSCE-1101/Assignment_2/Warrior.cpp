#include "Warrior.h"
Warrior::Warrior(std::string name) : Character(name, 100, 7) {}

int Warrior::attack() const { return getAttack(); }

int Warrior::specialAbility() const { return (getAttack() + 15); }
