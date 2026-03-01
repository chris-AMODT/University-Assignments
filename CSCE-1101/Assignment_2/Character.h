#include <string>

class Character {
private:
  std::string name;
  int health;
  int attackPower;
  static int characterCount;

protected:
  int getAttack() const;
  int getHealth() const;

public:
  Character(std::string, int, int);
  virtual ~Character();
  std::string getName() const;
  virtual int attack() const = 0;
  virtual int specialAbility() const = 0;
  void takeDamage(int);
  bool isAlive();
  static int getCharacterCount();
};
