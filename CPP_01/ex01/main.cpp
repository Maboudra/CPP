#include "Zombie.hpp"
#include <iostream>

int main() {
    std::cout << "=== Test 1: Création d'une horde de 5 zombies ===" << std::endl;
    
    int hordeSize = 5;
    Zombie* horde = zombieHorde(hordeSize, "HordeZombie");
    
    std::cout << "\n=== Annonce de tous les zombies de la horde ===" << std::endl;
    
    int i = 0;
    while (i < hordeSize) {
        std::cout << "Zombie " << i + 1 << ": ";
        horde[i].announce();
        i++;
    }
    
    std::cout << "\n=== Test 2: Horde de 3 zombies avec nom différent ===" << std::endl;
    
    int smallHordeSize = 3;
    Zombie* smallHorde = zombieHorde(smallHordeSize, "MiniZombie");
    
    int j = 0;
    while (j < smallHordeSize) {
        std::cout << "Mini zombie " << j + 1 << ": ";
        smallHorde[j].announce();
        j++;
    }
    
    std::cout << "\n=== Nettoyage de la mémoire ===" << std::endl;
    
    delete[] horde;
    delete[] smallHorde;
    
    std::cout << "\n=== Test 3: Horde de 1 zombie ===" << std::endl;
    
    Zombie* singleZombie = zombieHorde(1, "zombiezebi");
    singleZombie[0].announce();
    delete[] singleZombie;
    
    std::cout << "\n=== Fin du programme ===" << std::endl;
    
    return 0;
}