#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("YED");
	diamond.currStats();
	diamond.takeDamage(40);
	diamond.beRepaired(20);
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();
	diamond.currStats();
}