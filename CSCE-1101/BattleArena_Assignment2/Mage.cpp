#include "Mage.h"
Mage::Mage(std::string name) : Character(name, 50, 30, "Arcane Storm") {}

int Mage::attack() const { return getAttack(); }

int Mage::specialAbility() const { return (getAttack() + 25); }
