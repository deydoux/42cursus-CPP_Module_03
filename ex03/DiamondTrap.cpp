#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(ClapTrap::_name), ScavTrap(ClapTrap::_name), _name(name) {
	std::cerr << _name << " DiamondTrap constructor called" << std::endl;
	_hitPoints = FragTrap::_defaultHitPoints;
	_energyPoints = ScavTrap::_defaultEnergyPoints;
	_attackDamage = FragTrap::_defaultAttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other.ClapTrap::_name), FragTrap(ClapTrap::_name), ScavTrap(ClapTrap::_name), _name(other._name) {
	std::cerr << _name << " DiamondTrap copy constructor called" << std::endl;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
	std::cerr << _name << " DiamondTrap copy operator called" << std::endl;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cerr << _name << " DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
	if (_hitPoints <= 0)
		std::cout << _name << " DiamondTrap is too damaged to tell you who they are" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << _name << " DiamondTrap has no energy points left to tell you who they are" << std::endl;
	else
		std::cout << "I am " << _name << " DiamondTrap, and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
