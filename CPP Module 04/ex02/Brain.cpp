
#include "Brain.hpp"

Brain::Brain ( void ) 
{
	this->ideas = new std::string[100];
	for ( int i = 0; i < 100; i++ )
		ideas[i] = "Brainy brain";
	std::cout << "A Brain has been constructed and filled with" << std::endl;
}

Brain::Brain(std::string *var) 
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = var[i];
}

Brain::Brain ( const Brain &b ) 
{
	std::string	*ref = b.getIdeas();
	this->ideas = new std::string[100];
	for ( int i = 0; i < 100; i++ )
		this->ideas[i] = ref[i] + " stolen";
	std::cout << "A Brain has been copy constructed and stole the other's ideas" << std::endl;
}

Brain::~Brain ( void ) 
{
	delete [] this->ideas;
	std::cout << "A brain has been destroyed" << std::endl;
}

Brain &Brain::operator = ( const Brain &b ) 
{
	for ( int i = 0; i < 100; i++ )
		ideas[i] = b.ideas[i];
	return ( *this );
}

std::string	*Brain::getIdeas() const
{
	return (this->ideas);
}
