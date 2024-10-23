#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) {
	std::cerr << _name << " DiamondTrap constructor called" << std::endl;
	_hitPoints = FragTrap::_defaultHitPoints;
	_energyPoints = ScavTrap::_defaultEnergyPoints;
	_attackDamage = FragTrap::_defaultAttackDamage;
}

DiamondTrap::~DiamondTrap() {
	std::cerr << _name << " DiamondTrap destructor called" << std::endl;
}
