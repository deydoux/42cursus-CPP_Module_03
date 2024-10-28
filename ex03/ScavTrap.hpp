#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
protected:
	static const int _defaultAttackDamage = 20;
	static const int _defaultEnergyPoints = 50;
	static const int _defaultHitPoints = 100;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &rhs);
	~ScavTrap();
	void attack(const std::string &target);
	void guardGate();
};

#endif
