#include <HumanA.hpp>
#include <HumanB.hpp>

int main()
{
	{
		Weapon club = Weapon("crude spiked club");// Weapon object
		HumanA bob("Bob", club);// HumanA object
		bob.attack();// Bob attacks with their crude spiked club
		club.setType("some other type of club");// Change the type of the weapon
		bob.attack();// Bob attacks with their some other type of club
	}
	{
		Weapon club = Weapon("crude spiked club");// Weapon object
		HumanB jim("Jim");// HumanB object
		jim.setWeapon(club);// Set the weapon of the HumanB object
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}
