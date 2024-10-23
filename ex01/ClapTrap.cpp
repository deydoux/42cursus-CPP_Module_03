#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cerr << _name << " ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other): _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints),
_attackDamage(other._attackDamage) {
	std::cerr << _name << " ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	std::cerr << _name << " ClapTrap copy assignement operator called" << std::endl;
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cerr << _name << " ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (_hitPoints <= 0)
		std::cout << _name << " ClapTrap is too damaged to attack" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << _name << " ClapTrap has no energy points left to attack" << std::endl;
	else {
		_energyPoints--;
		std::cout << _name << " ClapTrap attacks " << target << " causing " << _attackDamage << " points of damage" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= 0)
		std::cout << _name << " ClapTrap is already down" << std::endl;
	else if (amount > INT_MAX || (int)amount >= _hitPoints) {
		_hitPoints = 0;
		std::cout << _name << " ClapTrap takes " << amount << " damage points and is destroyed" << std::endl;
	} else {
		_hitPoints -= amount;
		std::cout << _name << " ClapTrap takes " << amount << " damage points" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints <= 0)
		std::cout << _name << " ClapTrap is too damaged for repairs" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << _name << " ClapTrap has no energy points left for repairs" << std::endl;
	else {
		_energyPoints--;
		_hitPoints += amount;
		std::cout << _name << " ClapTrap repaired " << amount << " points" << std::endl;
	}
}
