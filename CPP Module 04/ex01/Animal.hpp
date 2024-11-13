
#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>

class Animal {
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
};


#endif
