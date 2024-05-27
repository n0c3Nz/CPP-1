#include "zombie.hpp"

int main(void)
{
	Zombie zombie("Foo");//* ✅ Constructor 1️⃣
	zombie.announce();
	/*------------------*/
	Zombie* Paco = newZombie("Paco");//* ✅ newZombie() 🔄 HEAP 2️⃣
	delete Paco;
	/*------------------*/
	randomChump("Pedro");//* ✅ randomChump()  🗄️ STACK 3️⃣
	return 0;
}
