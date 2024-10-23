#include "ScavTrap.hpp"

int main() {
	ScavTrap jack("Jack");

	for (size_t i = 0; i < 6; i++) {
		jack.attack("Joe");
		jack.beRepaired(1);
	}

	jack.takeDamage(10);
	jack.takeDamage(5);
	jack.takeDamage(1);
}
