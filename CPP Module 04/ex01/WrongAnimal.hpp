
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal 
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& var);
		~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal& var);
		std::string getType() const;
		void makeSound() const;
};


#endif
