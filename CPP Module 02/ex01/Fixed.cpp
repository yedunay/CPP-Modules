#include "Fixed.hpp"

Fixed::Fixed() : nbr(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer){
	std::cout << "Int constructor called" << std::endl;
	this->nbr = integer << this->nbrBits;
}

Fixed::Fixed(const float floating){
	std::cout << "Float constructor called" << std::endl;
	this->nbr = roundf(floating * (1 << this->nbrBits));
}

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed){
	std::cout << "Copy assignation operator called" << std::endl;
	this->nbr = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Default destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nbr);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->nbr = raw;
}

float Fixed::toFloat(void) const{
	return ((float)this->nbr / (float)(1 << this->nbrBits));
}

int Fixed::toInt(void) const{
	return (this->nbr >> this->nbrBits);
}

std::ostream &operator<<(std::ostream &ostream, const Fixed &fixed){
	ostream << fixed.toFloat();
	return (ostream);
}