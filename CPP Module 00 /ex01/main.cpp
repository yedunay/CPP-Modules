#include "PhoneBook.hpp"

int main()
{
    PhoneBook   pb;
    Contact     contact;
    std::string      process;
    std::string      searchIndex;

    while(61)
    {
        std::cout << "What do you want me to do? (ADD / SEARCH / EXIT) " << std::endl;
        std::getline(std::cin, process);
        if(process == "ADD")
            pb.setContact();
        else if(process == "SEARCH")
        {
            if(!pb.isUser(0))
            {
                std::cout << "No registered user in Phone Book !" << std::endl;
                continue;
            }
            pb.searchFunc();
        }
        else if(process == "EXIT")
            break;
        else
            std::cout << "404 Command Not Found !" << std::endl;
    }
}