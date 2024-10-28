#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Unamed") {
	std::cerr << "Default ScavTrap constructor called" << std::endl;
	_attackDamage = _defaultAttackDamage;
	_energyPoints = _defaultEnergyPoints;
	_hitPoints = _defaultHitPoints;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	std::cerr << _name << " ScavTrap constructor called" << std::endl;
	_attackDamage = _defaultAttackDamage;
	_energyPoints = _defaultEnergyPoints;
	_hitPoints = _defaultHitPoints;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) {
	std::cerr << _name << " ScavTrap copy constructor called" << std::endl;
	_attackDamage = other._attackDamage;
	_energyPoints = other._energyPoints;
	_hitPoints = other._hitPoints;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	std::cerr << _name << " ScavTrap copy assignement operator called" << std::endl;
	_attackDamage = rhs._attackDamage;
	_energyPoints = rhs._energyPoints;
	_hitPoints = rhs._hitPoints;
	_name = rhs._name;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cerr << _name << " ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (_hitPoints <= 0)
		std::cout << _name << " ScavTrap is too damaged to attack" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << _name << " ScavTrap has no energy points left to attack" << std::endl;
	else {
		_energyPoints--;
		std::cout << _name << " ScavTrap attacks " << target << " causing " << _attackDamage << " points of damage" << std::endl;
	}
}

void ScavTrap::guardGate() {
	if (_hitPoints <= 0)
		std::cout << _name << " ScavTrap is too damaged to enter Gate keeper mode" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << _name << " ScavTrap has no energy points left to enter Gate keeper mode" << std::endl;
	else
		std::cout << _name << " ScavTrap is now in Gate keeper mode" << std::endl;
}
