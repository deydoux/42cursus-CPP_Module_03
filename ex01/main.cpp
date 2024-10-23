#include "ScavTrap.hpp"

int main() {
	ScavTrap joe("Joe");

	for (size_t i = 0; i <= 17; i++) {
		joe.attack("Jack");
		joe.beRepaired(5);
		joe.guardGate();
	}

	joe.takeDamage(125);
	joe.takeDamage(100);
	joe.takeDamage(1);
}
