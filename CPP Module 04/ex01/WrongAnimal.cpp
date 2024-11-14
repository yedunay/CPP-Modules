
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("Default WrongAnimal") 
{
	std::cout << "Default - WrongAnimal - Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):type(type) 
{
	std::cout << "Name - WrongAnimal - Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &var) 
{
	*this = var;
	std::cout << "Copy - WrongAnimal - Constructor Called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &var) 
{
	this->type = var.type;
	std::cout << "Assignment Operator - WrongAnimal - Called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "Deconstructor - WrongAnimal - Called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Default WrongAnimal Song : Wrong Rhh" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}