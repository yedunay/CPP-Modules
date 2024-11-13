
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

# define RED_COLOR "\x1b[31;01m"
# define WHITE_COLOR "\x1b[38;2;255;255;255;01m"
# define GREEN_COLOR "\x1b[32;01m"
# define RESET "\x1b[0m"

class ClapTrap {
private:
	std::string name;
	unsigned int hitPoint;
	unsigned int energyPoint;
	unsigned int attackDamage;
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& var);
	~ClapTrap();

	ClapTrap &operator = (const ClapTrap &var);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void currStats() const;
	
};


#endif
