#include "zombie.hpp"

Zombie* newZombie( std::string _name ){
	Zombie* newZombie = new Zombie(_name);
	newZombie->announce();
	return (newZombie);
}