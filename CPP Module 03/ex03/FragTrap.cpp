
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->name = "Undefined Name";
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << this->name <<" FragTrap Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout <<  this->name << " FragTrap Constructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &var) : ClapTrap(var)
{
	*this = var;
	std::cout << " FragTrap Copy Constructor Called" << std::endl;
}

FragTrap::~FragTrap() 
{
	std::cout << "FragTrap Descontructor Called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &var) 
{
	this->name = var.name;
	this->attackDamage = var.attackDamage;
	this->energyPoint = var.energyPoint;
	this->hitPoint = var.hitPoint;
	std::cout << "FragTrap Copy Assignment Operator Called" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys() 
{
	if (this->hitPoint > 0 || this->energyPoint > 0){
		std::cout << GREEN_COLOR << this->name << " FragTrap high fives guys!!!" << RESET <<std::endl;
		return;
	}
	std::cout << RED_COLOR << "This FragTrap " << this->name << " can't high five because he is dead or mana out !" << RESET << std::endl;
}
