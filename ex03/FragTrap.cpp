#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Unamed") {
	std::cerr << "Default FragTrap constructor called" << std::endl;
	_attackDamage = _defaultAttackDamage;
	_energyPoints = _defaultEnergyPoints;
	_hitPoints = _defaultHitPoints;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cerr << _name << " FragTrap constructor called" << std::endl;
	_attackDamage = _defaultAttackDamage;
	_energyPoints = _defaultEnergyPoints;
	_hitPoints = _defaultHitPoints;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other._name) {
	std::cerr << _name << " FragTrap copy constructor called" << std::endl;
	_attackDamage = other._attackDamage;
	_energyPoints = other._energyPoints;
	_hitPoints = other._hitPoints;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	std::cerr << _name << " FragTrap copy assignement operator called" << std::endl;
	_attackDamage = rhs._attackDamage;
	_energyPoints = rhs._energyPoints;
	_hitPoints = rhs._hitPoints;
	_name = rhs._name;
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
	else
		std::cout << _name << " FragTrap requests high fives from everyone!" << std::endl;
}
