#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}

Zombie::~Zombie() {
    std::cout << name << " Has died." << std::endl;
}

void Zombie::setName(const std::string& name) {
    this->name = name;
}

void Zombie::announce() const {
    std::cout << name << ": Braiiiiiiinnnzzzz..." << std::endl;
}
