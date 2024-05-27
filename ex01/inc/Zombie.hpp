#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream> // Incluir la cabecera necesaria

class Zombie {
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    void setName(const std::string& name);
    void announce() const;
};

#endif // ZOMBIE_HPP
