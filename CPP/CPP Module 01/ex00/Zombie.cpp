#include "Zombie.hpp"

Zombie::Zombie() : _name("Undefined"){}

Zombie::Zombie(const std::string &name)
{
    this->_name = name;
}

void Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " Destructor Called !" << std::endl;
}