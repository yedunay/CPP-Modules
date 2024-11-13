
# include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("Emre");
	scav.currStats();
	scav.attack("Enemy");
	for (int i = 0; i < 43; ++i)
	{
		scav.attack("Enemy");
	}
	scav.currStats();
	scav.guardGate();
	scav.attack("Enemy");
	scav.attack("Enemy");
	scav.attack("Enemy");
	scav.guardGate();
	scav.takeDamage(95);
	scav.currStats();
	scav.takeDamage(5);
	scav.currStats();
	scav.attack("Another Enemy");
	scav.currStats();
	return (0);

}
