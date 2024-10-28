#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <climits>
#include <iostream>
#include <string>

class ClapTrap {
protected:
	int _attackDamage;
	int _energyPoints;
	int _hitPoints;
	std::string _name;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &rhs);
	~ClapTrap();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
