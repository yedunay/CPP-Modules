#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB{
private:
	Weapon *wep;
	string name;
public:
	HumanB();
	HumanB(string name);
	void	attack(void);
	void	setWeapon(Weapon &club);
};

#endif