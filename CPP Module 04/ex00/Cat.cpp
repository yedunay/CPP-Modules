
#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Default Cat";
	std::cout << "Default - Cat - Constructor Called" << std::endl;
}

Cat::Cat(std::string type)
{
	this->type = type;
	std::cout << "Name - Cat - Constructor Called" << std::endl;
}

Cat::Cat(const Cat &var) 
{
	*this = var;
	std::cout << "Copy - Cat - Constructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &var) 
{
	this->type = var.type;
	std::cout << "Assignment Operator - Cat - Called" << std::endl;
	return (*this);
}

Cat::~Cat() 
{
	std::cout << "Deconstructor - Cat - Called" << std::endl;
}

void Cat::makeSound() const 
{
	std::cout << "Default Cat Song : Meow" << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}

void Cat::displayInfo() const 
{
	std::cout << WHITE_COLOR << "Type : " << this->type << RESET << std::endl;
}