#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("Unknown") {
}

Zombie::Zombie(std::string zombieName) : name(zombieName) {
}

Zombie::~Zombie() {
    std::cout << name << " is destroyed" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string zombieName) {
    name = zombieName;
}

Zombie* newZombie(std::string name) {
    Zombie* zombie = new Zombie(name);
    return zombie;
}

void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}