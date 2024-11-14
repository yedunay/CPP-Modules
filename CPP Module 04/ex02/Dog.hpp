
#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog& var);
		~Dog();
		Dog &operator=(const Dog& var);
		void makeSound() const;
		std::string getType() const;
		void	compareAndDisplay ( const Dog& var ) const;
};


#endif
