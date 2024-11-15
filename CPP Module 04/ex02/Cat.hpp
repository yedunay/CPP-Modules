
#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat& var);
		~Cat();
		Cat &operator=(const Cat& var);
		void makeSound() const;
		std::string getType() const;
		void	compareAndDisplay ( const Cat& var ) const;
};


#endif 
