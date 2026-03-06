#include "Warrior.h"
Warrior::Warrior(std::string name) : Character(name, 100, 15, "Power Strike") {}

int Warrior::attack() const { return getAttack(); }

int Warrior::specialAbility() const { return (getAttack() + 15); }
