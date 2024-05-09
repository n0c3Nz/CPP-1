#include "zombie.hpp"

int main(void)
{
	Zombie zombie("Foo");//* ✅ Constructor 1️⃣
	zombie.announce();
	/*------------------*/
	Zombie* Paco = newZombie("Paco");//* ✅ newZombie() 2️⃣
	Paco->announce();
	delete Paco;
	/*------------------*/
	randomChump("Pedro");//* ✅ randomChump()  🗄️ HEAP 3️⃣
	return 0;
}
