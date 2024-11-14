#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

# define RESET "\x1b[0m"
# define WHITE_COLOR "\x1b[38;2;255;255;255;01m"

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
