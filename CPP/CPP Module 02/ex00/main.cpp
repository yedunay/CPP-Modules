#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;

    std::cout << a.getRawBits() << std::endl;
    a.setRawBits(21);
    std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
    b.setRawBits(42);
    std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
    c.setRawBits(61);
    std::cout << c.getRawBits() << std::endl;
}