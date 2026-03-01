#include "Character.h"
#include <iostream>

int Character::getAttack() const { return Character::attackPower; }
int Character::getHealth() const { return Character::health; }

Character::Character(std::string name, int health, int attack)
    : name(name), health(health), attackPower(attack) {
  Character::characterCount++;
}

Character::~Character() {
  Character::characterCount--;
  std::cout << "Character Destroyed" << std::endl;
}

std::string Character::getName() const { return Character::name; }
void Character::takeDamage(int damage) { Character::health -= damage; }

bool Character::isAlive() { return (Character::health > 0); }
int Character::getCharacterCount() { return Character::characterCount; }
