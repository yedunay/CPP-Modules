
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

# define RESET "\x1b[0m"
# define WHITE_COLOR "\x1b[38;2;255;255;255;01m"

class Animal 
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& var);
		virtual ~Animal();
		Animal &operator=(const Animal& var);
		std::string getType() const;
		virtual void makeSound() const;
		virtual void displayInfo() const;
};


#endif 
