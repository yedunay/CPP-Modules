#include "Fixed.hpp"

int main() {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "Initial value of a: " << a << std::endl;
    std::cout << "Value of b (5.05 * 2): " << b << std::endl;

    std::cout << "\n--- Increment Operations ---" << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a after prefix increment: " << a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a after postfix increment: " << a << std::endl;

    std::cout << "\n--- Decrement Operations ---" << std::endl;
    std::cout << "--a: " << --a << std::endl;
    std::cout << "a after prefix decrement: " << a << std::endl;
    std::cout << "a--: " << a-- << std::endl;
    std::cout << "a after postfix decrement: " << a << std::endl;

    std::cout << "\n--- Comparison ---" << std::endl;
    std::cout << "Max between a and b: " << Fixed::max(a, b) << std::endl;

    a = Fixed(1);

    std::cout << "\n--- Bit Representation ---" << std::endl;
    std::cout << "Bits in a: " << a.getRawBits() << std::endl;
    std::cout << "Bits in b: " << b.getRawBits() << std::endl;

    Fixed c(0.5f);
    
    std::cout << "\n--- Arithmetic Operations ---" << std::endl;
    std::cout << "a: " << a << ", c: " << c << std::endl;
    std::cout << "a + c: " << a + c << std::endl;
    std::cout << "a - c: " << a - c << std::endl;
    std::cout << "c - a: " << c - a << std::endl;
    std::cout << "a * c: " << a * c << std::endl;
    std::cout << "a / c: " << a / c << std::endl;

    std::cout << "\n--- Logical Comparisons ---" << std::endl;
    std::cout << "a < c: " << (a < c) << std::endl;
    std::cout << "c < a: " << (c < a) << std::endl;
    std::cout << "c > a: " << (c > a) << std::endl;
    std::cout << "a > c: " << (a > c) << std::endl;
    std::cout << "a >= c: " << (a >= c) << std::endl;
    std::cout << "a <= c: " << (a <= c) << std::endl;
    std::cout << "a == c: " << (a == c) << std::endl;
    std::cout << "a != c: " << (a != c) << std::endl;
    std::cout << "c != a: " << (c != a) << std::endl;

    std::cout << "\n--- Min and Max Functions ---" << std::endl;
    std::cout << "min(a, c): " << Fixed::min(a, c) << std::endl;
    std::cout << "max(a, c): " << Fixed::max(a, c) << std::endl;

    return 0;
}
