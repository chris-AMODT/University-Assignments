#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

#include "Archer.h"
#include "Character.h"
#include "Mage.h"
#include "Warrior.h"

int main() {
  std::srand(time(0));
  Character *characters[5] = {new Warrior("Chris"), new Mage("James"),
                              new Warrior("Steven"), new Archer("Baldur"),
                              new Mage("Lara")};
  int specialProbability = 3;
  int rounds = (rand() % 3) + 4;
  for (int r = 1; r <= rounds; r++) {
    std::cout << "\n===== Round " << r << " =====\n";
    int i = rand() % 5;
    int j = rand() % 5;

    while (i == j) { // Ensures i and j are not the same
      j = rand() % 5;
    }

    Character *attacker = characters[i];
    Character *defender = characters[j];

    if (attacker->isAlive() && defender->isAlive()) {
      int damage;
      if (rand() % (specialProbability) ==
          0) { // Picks either special ability or normal attack (we could
               // increase special attack probability by lowering the quotient)
        std::cout << attacker->getName() << " uses " << attacker->getSpecial()
                  << " and deals " << attacker->specialAbility()
                  << " damage to " << defender->getName();
        damage = attacker->specialAbility();
      } else {
        std::cout << attacker->getName() << " uses normal attack and deals "
                  << attacker->attack() << " damage to " << defender->getName();
        damage = attacker->attack();
      }
      defender->takeDamage(damage);
    }
  }

  std::cout << "\n========= FINAL SCOREBOARD =========\n";
  for (Character *c : characters) {
    std::cout << std::setw(10) << c->getName() << std::setw(5)
              << std::max(c->getHealth(), 0) << std::setw(10)
              << (c->isAlive() ? "Alive" : "Defeated") << std::endl;
    delete c;
  }

  return 0;
}
