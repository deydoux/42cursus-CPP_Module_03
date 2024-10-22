#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _attackDamage(0), _energyPoints(10), _hitPoints(10), _name(name) {
	std::cerr << _name << " CallTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cerr << _name << " CallTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " is too damaged to attack!" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " has no energy points left to attack!" << std::endl;
	else {
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " is already down!" << std::endl;
	else if (amount > INT_MAX || (int)amount >= _hitPoints) {
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " takes " << amount << " damage points and is destroyed!" << std::endl;
	} else {
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " damage points!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " is too damaged for repairs!" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " has no energy points left for repairs!" << std::endl;
	else {
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repaired " << amount << " points!" << std::endl;
	}
}
