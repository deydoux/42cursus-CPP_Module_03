#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cerr << _name << " FragTrap constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other._name) {
	std::cerr << _name << " FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	std::cerr << _name << " FragTrap copy assignement operator called" << std::endl;
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cerr << _name << " FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
	if (_hitPoints <= 0)
		std::cout << _name << " FragTrap is too damaged to request high fives" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << _name << " FragTrap has no energy points left to request high fives" << std::endl;
	else {
		_energyPoints--;
		std::cout << _name << " FragTrap requests high fives from everyone!" << std::endl;
	}
}
