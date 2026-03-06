#include "Archer.h"
#include <string>

Archer::Archer(std::string name) : Character(name, 8, 8) {}

int Archer::attack() const { return getAttack(); }

int Archer::specialAbility() const { return getAttack() + 10; }
