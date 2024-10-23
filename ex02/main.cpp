#include "FragTrap.hpp"

int main() {
	FragTrap fragBomb("Frag-Bomb");

	for (size_t i = 0; i <= 34; i++) {
		fragBomb.attack("Diamond-Sparkles");
		fragBomb.beRepaired(5);
		fragBomb.highFivesGuys();
	}

	fragBomb.takeDamage(165);
	fragBomb.takeDamage(100);
	fragBomb.takeDamage(1);
}
