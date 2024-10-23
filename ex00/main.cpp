#include "ClapTrap.hpp"

int main() {
	ClapTrap jack("Jack");

	for (size_t i = 0; i <= 5; i++) {
		jack.attack("Joe");
		jack.beRepaired(1);
	}

	jack.takeDamage(10);
	jack.takeDamage(5);
	jack.takeDamage(1);
}
