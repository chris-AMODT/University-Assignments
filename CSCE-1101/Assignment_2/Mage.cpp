#include "Mage.h"
Mage::Mage(std::string name) : Character(name, 50, 10) {}

int Mage::attack() const { return getAttack(); }

int Mage::specialAbility() const { return (getAttack() + 25); }
