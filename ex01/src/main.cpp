#include "Zombie.hpp"
#include "zombieHorde.hpp"

int main() {
    int N = 5;
    std::string name = "Steve";

    Zombie* horde = zombieHorde(N, name);

    if (horde != nullptr) {
        for (int i = 0; i < N; ++i) {
            horde[i].announce();
        }

        delete[] horde; // Liberar la memoria asignada a la horda de zombies
    } else {
        std::cerr << "Failed to create a horde of zombies." << std::endl;
    }

    return 0;
}
