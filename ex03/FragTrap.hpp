#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
protected:
	static const int _defaultAttackDamage = 30;
	static const int _defaultEnergyPoints = 100;
	static const int _defaultHitPoints = 100;
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &rhs);
	~FragTrap();
	void highFivesGuys();
};

#endif
