#include "Character.h"
#include <string>

int Character::characterCount = 0;

int Character::getAttack() const { return attackPower; }
int Character::getHealth() const { return health; }
std::string Character::getSpecial() const { return specialName; }
Character::Character(std::string name, int health, int attack,
                     std::string special)
    : name(name), health(health), attackPower(attack), specialName(special) {
  Character::characterCount++;
}

Character::~Character() { Character::characterCount--; }

std::string Character::getName() const { return name; }
void Character::takeDamage(int damage) { health -= damage; }

bool Character::isAlive() { return (health > 0); }
int Character::getCharacterCount() { return characterCount; }
