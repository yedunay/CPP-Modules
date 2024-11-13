
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& var);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal& var);
	std::string getType() const;
	virtual void makeSound() const;
};


#endif 
