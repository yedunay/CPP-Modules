#include "ClapTrap.hpp"

#include <climits>

ClapTrap::ClapTrap() 
{
	this->name = "Undefined ";
	this->attackDamage = 0;
	this->energyPoint = 10;
	this->hitPoint = 10;
	std::cout << "Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &var) 
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = var;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &var) 
{
	this->name = var.name;
	this->hitPoint = var.hitPoint;
	this->energyPoint = var.energyPoint;
	this->attackDamage = var.attackDamage;
	std::cout << "Operator Overload Called" << std::endl;
	return (*this);
}

ClapTrap::ClapTrap(std::string name) 
{
	this->name = name;
	this->attackDamage = 0;
	this->energyPoint = 10;
	this->hitPoint = 10;
	std::cout << this->name <<" Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "Destructor Called" << std::endl;
}

void ClapTrap::currStats() const
{
	std::cout << WHITE_COLOR << std::endl;
	std::cout << "#####  STATS  #####" << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Hit Points: " << this->hitPoint << std::endl;
	std::cout << "Energy Points: " << this->energyPoint << std::endl;
	std::cout << "Attack Damage: " << this->attackDamage << std::endl;

	if (this->hitPoint == 0)
		std::cout << this->name << " is dead!" << std::endl;
	else
		std::cout << this->name << " is alive!" << std::endl;

	std::cout << "###################" << std::endl;
	std::cout << RESET << std::endl;
}

void ClapTrap::attack(const std::string &target) 
{
	if (this->energyPoint == 0)
	{
		std::cout << RED_COLOR << "ClapTrap " << this->name << " has no energy left to attack!" << RESET << std::endl;
		return ;
	}
	if (this->hitPoint == 0)
	{
		std::cout << RED_COLOR << "ClapTrap " << this->name << " is already dead!" << RESET << std::endl;
		return ;
	}
	std::cout <<  "ClapTrap " << this->name << " attacks " << target << " ,causing " << this->attackDamage << " points of damage!" <<  std::endl;
	this->energyPoint = (this->energyPoint - 1);
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	if (this->hitPoint == 0)
	{
		std::cout << RED_COLOR << "ClapTrap " << this->name << " is already dead!" << RESET << std::endl;
		return ;
	}
	else if (amount == 0)
	{
		std::cout << WHITE_COLOR << "ClapTrap " << this->name << " takes 0 points of damage!" << RESET << std::endl;
		return ;
	}
	else
	{
		if (this->hitPoint <= amount)
		{
			this->hitPoint = 0;
			std::cout << RED_COLOR << "ClapTrap " << this->name << " is dead!" << RESET << std::endl;
			return ;
		}
		std::cout << RED_COLOR << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << RESET << std::endl;
		this->hitPoint = (this->hitPoint - amount);
	}
}

void ClapTrap::beRepaired(unsigned int amount) 
{
	if (this->hitPoint == 0)
	{
		std::cout << RED_COLOR << "ClapTrap " << this->name << " is already dead and cannot be repaired!" << RESET << std::endl;
		return ;
	}
	if (this->energyPoint == 0)
	{
		std::cout << RED_COLOR << "ClapTrap " << this->name << " has no energy left to repair!" << RESET << std::endl;
		return ;
	}
	if (amount > UINT_MAX - this->hitPoint)
		amount = UINT_MAX - this->hitPoint;
	this->hitPoint = (this->hitPoint + amount);
	this->energyPoint = (this->energyPoint - 1);
	std::cout << GREEN_COLOR << "ClapTrap " << this->name << " is repaired for " << amount << " points!" << RESET << std::endl;
}
