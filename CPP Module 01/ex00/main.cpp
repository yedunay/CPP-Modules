#include "Zombie.hpp"

int main()
{
    Zombie	zombie;
    Zombie	*zombieptr;

    zombieptr = zombie.newZombie("YED");
    zombie.announce();
    zombieptr->announce();
    zombie.randomChump("Zombie");
    delete zombieptr;
}