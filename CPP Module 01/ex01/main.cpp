#include "Zombie.hpp"

int main()
{
    Zombie  *zombies;
    zombies = Zombie::zombieHorde(3, "Zombie");
    delete[] zombies;
}