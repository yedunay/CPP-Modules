#include "Contact.hpp"

void    Contact::setFirstName(std::string firstName)
{
    this->_firstName = firstName;
}

void    Contact::setLastName(std::string lastName)
{
    this->_lastName = lastName;
}

void    Contact::setNickName(std::string nickName)
{
    this->_nickName = nickName;
}

void    Contact::setPhoneNumber(std::string phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}

void    Contact::setSecret(std::string secret)
{
    this->_secret = secret;
}

void    Contact::setIndex(int index)
{
    this->_index = index;
}

const std::string &Contact::getFirstName()
{
    return _firstName;
}

const std::string &Contact::getLastName()
{
    return _lastName;
}

const std::string &Contact::getNickName()
{
    return _nickName;
}

const std::string &Contact::getPhoneNumber()
{
    return _phoneNumber;
}

const std::string &Contact::getSecret()
{
    return _secret;
}

const int &Contact::getIndex()
{
    return this->_index;
}

