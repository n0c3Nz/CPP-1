#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream> 
#include <iomanip>
#include <cstdlib>
#include <cstdio>

class Zombie{
	private:
		std::string		name;
	public:
		Zombie(std::string _name);
		~Zombie();
		void	announce();
};

Zombie* newZombie( std::string _name );
void randomChump( std::string _name );


#endif