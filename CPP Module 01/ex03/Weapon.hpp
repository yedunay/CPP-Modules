#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Weapon
{
private:
	string type;

public:
	Weapon();
	Weapon(string type);
	const string &getType(void);
	void setType(string type);
};

#endif
