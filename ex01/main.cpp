#include "ScavTrap.hpp"

int main() {
	ScavTrap scavEnge("Scav-Enge");

	for (size_t i = 0; i <= 17; i++) {
		scavEnge.attack("Frag-Bomb");
		scavEnge.beRepaired(5);
		scavEnge.guardGate();
	}

	scavEnge.takeDamage(125);
	scavEnge.takeDamage(100);
	scavEnge.takeDamage(1);
}
