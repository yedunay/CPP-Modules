
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& var);
		~FragTrap();
		FragTrap &operator=(const FragTrap &var);
		void highFivesGuys(void);
};


#endif 
