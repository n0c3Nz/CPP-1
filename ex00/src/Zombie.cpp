#include "zombie.hpp"

Zombie::Zombie(std::string _name)// Constructor
{
	name = _name;
}

Zombie::~Zombie(){
	std::cout << name << ": " << "Has died." << std::endl;
}

void	Zombie::announce()// Funcion metodo
{
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}