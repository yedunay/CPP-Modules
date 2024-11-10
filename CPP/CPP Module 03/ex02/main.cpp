#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap talha("talha");

	talha.takeDamage(20);
	talha.beRepaired(10);
	talha.highFivesGuys();
}