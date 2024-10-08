#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

void HumanB::setWeapon(Weapon weapon)
{
	_weapon = new Weapon(weapon);
}

void HumanB::attack()
{
	if (_weapon == NULL)
	{
		std::cout << _name << " has no weapon to attack with" << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Weapon " << _weapon->getType() << " is destroyed" << std::endl;
	delete _weapon;
	std::cout << "HumanB " << _name << " is dead" << std::endl;
}