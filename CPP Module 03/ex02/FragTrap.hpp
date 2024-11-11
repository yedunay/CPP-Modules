
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& var);
	~FragTrap();
	FragTrap &operator=(const FragTrap &var);
	void highFivesGuys(void);
	void attack(const std::string& target);
};


#endif 
