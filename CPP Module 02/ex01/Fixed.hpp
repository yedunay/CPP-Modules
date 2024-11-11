#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int nbr;
		static const int nbrBits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed& var);
		Fixed(const int getNum);
		Fixed(const float getFloat);
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(const int raw);
		Fixed& operator=(const Fixed& other);
		
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
