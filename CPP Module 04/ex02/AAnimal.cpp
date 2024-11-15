
#include "AAnimal.hpp"

AAnimal::AAnimal():type("Default AAnimal") 
{
	std::cout << "Default - AAnimal - Constructor Called" << std::endl;
}

AAnimal::AAnimal(std::string type):type(type) 
{
	std::cout << "Name - AAnimal - Constructor Called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &var) 
{
	*this = var;
	std::cout << "Copy - AAnimal - Constructor Called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &var) 
{
	this->type = var.type;
	std::cout << "Assignment Operator - AAnimal - Called" << std::endl;
	return (*this);
}

AAnimal::~AAnimal() 
{
	std::cout << "Deconstructor - AAnimal - Called" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "Default AAnimal Song : Hrrr" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}