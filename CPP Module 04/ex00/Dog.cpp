
#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Default Dog";
	std::cout << "Default - Dog - Constructor Called" << std::endl;
}

Dog::Dog(std::string type)
{
	this->type = type;
	std::cout << "Name - Dog - Constructor Called" << std::endl;
}

Dog::Dog(const Dog &var) 
{
	*this = var;
	std::cout << "Copy - Dog - Constructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &var) 
{
	this->type = var.type;
	std::cout << "Assignment Operator - Dog - Called" << std::endl;
	return (*this);
}

Dog::~Dog() 
{
	std::cout << "Deconstructor - Dog - Called" << std::endl;
}

void Dog::displayInfo() const
{
	std::cout << WHITE_COLOR << "Type : " << this->type << RESET << std::endl;
}

void Dog::makeSound() const 
{
	std::cout << "Default Dog Song : Woof" << std::endl;
}

std::string Dog::getType() const
{
	return (this->type);
}