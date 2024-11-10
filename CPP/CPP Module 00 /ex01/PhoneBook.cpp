#include "PhoneBook.hpp"

int PhoneBook::isBlank(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if(str[i] != ' ' && str[i] != '\t')
            return (1);
    return (0);
}

std::string PhoneBook::takeInput(void)
{
    std::string input;
    std::getline(std::cin, input);
    
    while (input.empty() || !isBlank(input))
    {
        if(input.empty() || !isBlank(input))
            std::cout << "Input is empty try again : ";
        std::getline(std::cin, input);
    }
    return (input);
}

void PhoneBook::setContact()
{
    static int i = 0;
    this->_contact[i % 8].setIndex(i % 8);
    std::cout << "First Name : " << std::flush;
    this->_contact[i % 8].setFirstName(takeInput());
    std::cout << "Last Name : " << std::flush;
    this->_contact[i % 8].setLastName(takeInput());
    std::cout << "Nick Name : " << std::flush;
    this->_contact[i % 8].setNickName(takeInput());
    std::cout << "Phone Number : " << std::flush;
    this->_contact[i % 8].setPhoneNumber(takeInput());
    std::cout << "Darkest Secret : " << std::flush;
    this->_contact[i % 8].setSecret(takeInput());
    i++;
}

int PhoneBook::isUser(int index)
{
    if (index < 0 || index >= 8)
        return 0;
    return (this->_contact[index].getFirstName().empty() ? 0 : 1);
}


void PhoneBook::searchFunc()
{
    std::cout << "     Index| FirstName|  LastName|  NickName|" << std::endl;
    int max = 0;
    while(max < 8 && !_contact[max].getFirstName().empty())
        max++;
    for (int i = 0; i < max; i++)
    {
        std::cout << std::setw(10) << i << "|";
        _contact[i].getFirstName().length() > 10 ? std::cout << std::setw(10) << _contact[i].getFirstName().substr(0,9) + "." <<  "|" : std::cout << std::setw(10) << _contact[i].getFirstName() << "|";
        _contact[i].getLastName().length() > 10 ? std::cout << std::setw(10) << _contact[i].getLastName().substr(0,9) + "." <<  "|" : std::cout << std::setw(10) << _contact[i].getLastName() << "|";
        _contact[i].getNickName().length() > 10 ? std::cout << std::setw(10) << _contact[i].getNickName().substr(0,9) + "." <<  "|" : std::cout << std::setw(10) << _contact[i].getNickName() << "|";
        std::cout << std::endl;
    }
    int index = 0;
    std::cout << "Index (0 - " << max - 1 << ") :" ;
    std::cin >> index;
    while (std::cin.fail() || (index > max - 1 || index < 0)) 
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter an valid value." << std::endl;
        std::cout << "Index (0 - " << max - 1 << ") :" ;
        std::cin >> index;
    } 

	std::cout << "First Name    :" << _contact[index].getFirstName() << std::endl;
	std::cout << "Last Name     :" << _contact[index].getLastName() << std::endl;
	std::cout << "Nick Name     :" << _contact[index].getNickName() << std::endl;
	std::cout << "Phone Number  :" << _contact[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret:" << _contact[index].getSecret() << std::endl;
	std::cin.ignore();
}