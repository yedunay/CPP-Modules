
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap();
		void guardGate();
		ScavTrap& operator=(const ScavTrap& other);
		void attack(const std::string &target);
};


#endif
