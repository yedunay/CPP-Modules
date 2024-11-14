
#include "Animal.hpp"

Animal::Animal():type("Default Animal") 
{
	std::cout << "Default - Animal - Constructor Called" << std::endl;
}

Animal::Animal(std::string type):type(type) 
{
	std::cout << "Name - Animal - Constructor Called" << std::endl;
}

Animal::Animal(const Animal &var) 
{
	*this = var;
	std::cout << "Copy - Animal - Constructor Called" << std::endl;
}

Animal &Animal::operator=(const Animal &var) 
{
	this->type = var.type;
	std::cout << "Assignment Operator - Animal - Called" << std::endl;
	return (*this);
}

Animal::~Animal() 
{
	std::cout << "Deconstructor - Animal - Called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Default Animal Sound : Hrrr ! " << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::displayInfo() const
{
	std::cout << WHITE_COLOR << "Type : " << this->type << RESET << std::endl;
}