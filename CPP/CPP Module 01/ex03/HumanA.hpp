#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
private:
	Weapon *wep;
	string name;
public:
	HumanA();
	HumanA(string name, Weapon &club);
	void	attack(void);
	void	setWeapon(Weapon &club);
};

#endif