#include "ScavTrap.hpp"

int main() {
	ScavTrap scavEnge("Scav-Enge");

	for (size_t i = 0; i <= 25; i++) {
		scavEnge.guardGate();
		scavEnge.attack("Frag-Bomb");
		scavEnge.beRepaired(1);
	}

	scavEnge.takeDamage(25);
	scavEnge.takeDamage(100);
	scavEnge.takeDamage(1);

	scavEnge.guardGate();
	scavEnge.attack("Frag-Bomb");
	scavEnge.beRepaired(1);
}
