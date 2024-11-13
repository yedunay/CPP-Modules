#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap clap("YED");
	clap.currStats();
	clap.attack("enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);
	clap.currStats();
	ScavTrap scav("YED");
	scav.currStats();
	scav.attack("enemy");
	scav.takeDamage(20);
	scav.beRepaired(10);
	scav.guardGate();
	scav.currStats();
	FragTrap frag("YED");
	frag.currStats();
	frag.attack("enemy");
	frag.takeDamage(50);
	frag.beRepaired(20);
	frag.highFivesGuys();
	frag.currStats();
}