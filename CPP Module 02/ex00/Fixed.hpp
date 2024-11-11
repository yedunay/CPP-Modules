#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed 
{
	private:
		int nbr;
		static const int nbrBits = 8;
	public:
		Fixed();
		Fixed(int value);
		Fixed(const Fixed& var);
		int getRawBits(void)const;
		void setRawBits(int const raw);
		Fixed &operator = (const Fixed &other);
		~Fixed();
};


#endif