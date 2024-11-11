#include "HumanA.hpp"

HumanA::HumanA() {
	this->name = "Default Name";
	this->wep->setType("Default Type");
}

HumanA::HumanA(std::string name, Weapon &club) {
	this->name = name;
	this->wep = &club;
}

void HumanA::setWeapon(Weapon &club) {
	this->wep = &club;
}

void HumanA::attack() {
	if ((this) != NULL)
		cout << this->name << " attacks with their " << this->wep->getType() << endl;
}