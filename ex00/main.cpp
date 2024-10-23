#include "ClapTrap.hpp"

int main() {
	ClapTrap clapStew("Clap-Stew");

	for (size_t i = 0; i <= 5; i++) {
		clapStew.attack("Scav-Enge");
		clapStew.beRepaired(1);
	}

	clapStew.takeDamage(10);
	clapStew.takeDamage(5);
	clapStew.takeDamage(1);
}
