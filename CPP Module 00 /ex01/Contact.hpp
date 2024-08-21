#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>

class Contact
{
    public:
        void    setFirstName(std::string firstName);
        void    setLastName(std::string lastName);
        void    setNickName(std::string nickName);
        void    setPhoneNumber(std::string phoneNumber);
        void    setSecret(std::string secret);
        void    setIndex(int num);
        const std::string& getFirstName(void);
        const std::string& getLastName(void);
        const std::string& getNickName(void);
        const std::string& getPhoneNumber(void);
        const std::string& getSecret(void);
        const int&  getIndex(void);
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _secret;
        int         _index;
};

#endif