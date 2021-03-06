#pragma once

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string	_name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(DiamondTrap const& other);

	void	whoAmI();
	void	attack(std::string const& target);

	DiamondTrap const& operator=(DiamondTrap const& other);
};

#endif
