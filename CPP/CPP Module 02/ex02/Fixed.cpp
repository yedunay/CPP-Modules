#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	nbr = 0;
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int number)
{
	this->nbr = number << this->nbrBits;
}
Fixed::Fixed(const float number){
	this->nbr = roundf(number * (1 << this->nbrBits));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const{

	return ((float)this->nbr / (1 << this->nbrBits));
}

int		Fixed::toInt(void) const{

	return (this->nbr >> this->nbrBits);
}

int		Fixed::getRawBits(void) const{

	return (this->nbr);
}

void	Fixed::setRawBits(const int raw){

	this->nbr = raw;
}

Fixed& Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->nbr = other.getRawBits();
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){
	os << fixed.toFloat();
	return (os);
}

bool Fixed::operator>(const Fixed& other) const{
	return this->nbr > other.nbr ? true : false;
}

bool Fixed::operator<(const Fixed& other) const{
	return this->nbr < other.nbr ? true : false;
}

bool Fixed::operator>=(const Fixed& other) const{
	return this->nbr >= other.nbr ? true : false;
}

bool Fixed::operator<=(const Fixed& other) const{
	return this->nbr <=  other.nbr ? true : false;
}

bool Fixed::operator==(const Fixed& other) const{
	return this->nbr == other.nbr ? true : false;
}

bool Fixed::operator!=(const Fixed& other) const{
	return this->nbr != other.nbr ? true : false;
}

Fixed Fixed::operator+(const Fixed& other) const{
	return this->toFloat() + other.toFloat();
}

Fixed Fixed::operator-(const Fixed& other) const{
	return this->toFloat() - other.toFloat();
} 

Fixed Fixed::operator*(const Fixed& other) const{
	return this->toFloat() * other.toFloat();
}

Fixed Fixed::operator/(const Fixed& other) const{
	return this->toFloat() / other.toFloat();
}

void Fixed::operator+=(const Fixed& other)
{
	*this = *this + other;
}

void Fixed::operator-=(const Fixed& other)
{
	*this = *this - other;
}

void Fixed::operator*=(const Fixed& other)
{
	*this = *this * other;
}

void Fixed::operator/=(const Fixed& other){
	*this = *this / other;
}

Fixed& Fixed::operator++(void){
	this->nbr++;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed& Fixed::operator--(void){
	this->nbr--;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b){
	return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
	return a > b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
	return a < b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
	return a > b ? a : b;
}
