#include <iostream>

int main()
{
	std::string	str;
	std::string* stringPTR = &str;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";
	std::cout << "String Memory Address : " << &str << std::endl;
	std::cout << "Pointer Memory Address : " << stringPTR << std::endl;
	std::cout << "Reference Memory Address :" << &stringREF << std::endl;

	std::cout << "String Value : " << str << std::endl;
	std::cout << "Pointer Value : " << *stringPTR << std::endl;
	std::cout << "Reference Value : " << stringREF << std::endl;
}