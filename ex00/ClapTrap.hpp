#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
private:
	int _attackDamage;
	int _energyPoint;
	int _hitPoints;
	std::string _name;
public:
	ClapTrap(std::string name);
	~ClapTrap();
};

#endif
