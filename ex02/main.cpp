#include "FragTrap.hpp"

int main() {
	FragTrap fragBomb("Frag-Bomb");

	for (size_t i = 0; i <= 100; i++) {
		fragBomb.highFivesGuys();
		fragBomb.attack("Diamond-Sparkles");
		fragBomb.beRepaired(1);
	}

	fragBomb.takeDamage(100);
	fragBomb.takeDamage(100);
	fragBomb.takeDamage(1);

	fragBomb.highFivesGuys();
	fragBomb.attack("Diamond-Sparkles");
	fragBomb.beRepaired(1);
}
