#include "zombie.hpp"

void randomChump( std::string _name ){
	Zombie *zombie = newZombie(_name);
	zombie->announce();
	delete zombie;
}