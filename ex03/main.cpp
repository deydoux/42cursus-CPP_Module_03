#include "DiamondTrap.hpp"

int main() {
	DiamondTrap diamondSparkles("Diamond-Sparkles");

	for (size_t i = 0; i <= 25; i++) {
		diamondSparkles.highFivesGuys();
		diamondSparkles.guardGate();
		diamondSparkles.whoAmI();
		diamondSparkles.attack("Clap-Stew");
		diamondSparkles.beRepaired(1);
	}

	diamondSparkles.takeDamage(100);
	diamondSparkles.takeDamage(100);
	diamondSparkles.takeDamage(1);

	diamondSparkles.highFivesGuys();
	diamondSparkles.guardGate();
	diamondSparkles.whoAmI();
	diamondSparkles.attack("Clap-Stew");
	diamondSparkles.beRepaired(1);
}
