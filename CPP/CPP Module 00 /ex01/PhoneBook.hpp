#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    public:
        void        setContact(void);
        void        getUser(void);
        int         isBlank(std::string str);
        std::string takeInput(void);
        int         getUserWithIndex(std::string index);
        int         isUser(int index);
        void        searchFunc(void);
    private:
        Contact     _contact[8];
};

#endif