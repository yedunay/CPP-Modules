
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* D = new Dog();
	const Animal* C = new Cat();
	const WrongAnimal* W = new WrongCat();
	std::cout << D->getType() << "- TYPE" << std::endl;
	std::cout << C->getType() << "- TYPE" << std::endl;
	std::cout << W->getType() << "- TYPE" << std::endl;
	D->makeSound();
	C->makeSound();
	meta->makeSound();
	W->makeSound();

	delete meta;
	delete D;
	delete C;
	delete W;
}