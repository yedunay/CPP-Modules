
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap:public ClapTrap{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& var);
	~ScavTrap();
	void guardGate();
	ScavTrap& operator=(const ScavTrap& var);
	void attack(const std::string& target);
};


#endif
