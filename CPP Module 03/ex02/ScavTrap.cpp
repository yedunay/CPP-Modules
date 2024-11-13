
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default Scavtrap constructor called" << std::endl;
	this->name = "ScavTrap";
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "Copy Scavtrap constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoint = other.hitPoint;
		this->energyPoint = other.energyPoint;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energyPoint == 0)
	{
		std::cout << RED_COLOR << "ScavTrap " << this->name << " has no energy left to attack!" << RESET << std::endl;
		return ;
	}
	if (this->hitPoint == 0)
	{
		std::cout << RED_COLOR << "ScavTrap " << this->name << " is already dead!" << RESET << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << " and gived " << this->attackDamage << " points of damage !" << std::endl;
	this->energyPoint = (this->energyPoint - 1);
}

void ScavTrap::guardGate()
{
	std::string name = this->name;
	if (this->energyPoint > 0 && this->hitPoint > 0)
		std::cout << GREEN_COLOR << "ScavTrap " << name << " has entered Gate Keeper mode!" << RESET << std::endl;
	else if (this->energyPoint == 0)
		std::cout << RED_COLOR << "ScavTrap " << name << " cannot enter Gate Keeper mode due to insufficient energy!" << RESET << std::endl;
	else if (this->hitPoint <= 0)
		std::cout << RED_COLOR << "ScavTrap " << name << " is already dead!" << RESET << std::endl;
}