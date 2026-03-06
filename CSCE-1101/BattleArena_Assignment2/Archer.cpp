#include "Archer.h"
#include <string>

Archer::Archer(std::string name) : Character(name, 80, 20, "Double Shot") {}

int Archer::attack() const { return getAttack(); }

int Archer::specialAbility() const { return getAttack() + 10; }
