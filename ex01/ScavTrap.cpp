#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cerr << _name << " ScavTrap constructor called" << std::endl;
	_attackDamage = 20;
	_energyPoints = 50;
	_hitPoints = 100;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other) {
	std::cerr << _name << " ScavTrap copy constructor called" << std::endl;
	_attackDamage = other._attackDamage;
	_energyPoints = other._energyPoints;
	_hitPoints = other._hitPoints;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
	_attackDamage = rhs._attackDamage;
	_energyPoints = rhs._energyPoints;
	_hitPoints = rhs._hitPoints;
	_name = rhs._name;
	std::cerr << _name << " ScavTrap copy assignement operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cerr << _name << " ScavTrap destructor called" << std::endl;
}
