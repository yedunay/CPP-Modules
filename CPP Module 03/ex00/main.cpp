
# include "ClapTrap.hpp"

int main(){
	ClapTrap Yunus("Yunus");

	Yunus.attack("The Matrix");
	Yunus.attack("The Matrix");
	Yunus.attack("The Matrix");
	Yunus.takeDamage(4);
	Yunus.attack("The Matrix");
	Yunus.attack("The Matrix");
	Yunus.beRepaired(10);
	Yunus.attack("The Matrix");
	Yunus.attack("The Matrix");
	Yunus.currStats();
	Yunus.attack("The Matrix");
	Yunus.currStats();
	Yunus.attack("The Matrix");
	Yunus.attack("The Matrix");
	Yunus.currStats();
	Yunus.takeDamage(4);
	Yunus.attack("The Matrix");
	Yunus.takeDamage(1);
	Yunus.currStats();
	Yunus.beRepaired(10);
	Yunus.takeDamage(11);
	Yunus.attack("The Matrix");
	Yunus.currStats();
	Yunus.attack("The Matrix");
}
