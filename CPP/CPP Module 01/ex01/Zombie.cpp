#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(const std::string &name)
{
    this->_name = name;
}

Zombie *Zombie::newZombie(std::string name)
{
    return new Zombie(name);
}

void Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}

void Zombie::setName(const std::string &name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " destructor called" << std::endl;
}