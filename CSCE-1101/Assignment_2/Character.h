#pragma once
#include <string>

class Character {
private:
  std::string name;
  int health;
  int attackPower;
  static int characterCount;
  std::string specialName;

protected:
  int getAttack() const;

public:
  std::string getSpecial() const;
  int getHealth() const;
  Character(std::string, int, int, std::string);
  virtual ~Character();
  std::string getName() const;
  virtual int attack() const = 0;
  virtual int specialAbility() const = 0;
  void takeDamage(int);
  bool isAlive();
  static int getCharacterCount();
};
