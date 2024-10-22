#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _attackDamage(0), _energyPoint(10), _hitPoints(10), _name(name) {
	std::cerr << _name << " CallTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cerr << _name << " CallTrap destructor called" << std::endl;
}
