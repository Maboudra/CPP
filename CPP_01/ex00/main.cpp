#include "Zombie.hpp"
#include <iostream>

int main() {
    //std::cout << "=== Test 1: newZombie (Heap allocation) ===" << std::endl;
    
    Zombie* heapZombie = newZombie("johnny");
    heapZombie->announce();
    
    //std::cout << "\n=== Test 2: randomChump (Stack allocation) ===" << std::endl;
    
    randomChump("yass");
    
    //std::cout << "\n=== Test 3: Autre randomChump ===" << std::endl;
    
    randomChump("cailloux");
    
    //std::cout << "\n=== Test 4: Nettoyage du heap zombie ===" << std::endl;
    
    delete heapZombie;
    
   // std::cout << "\n=== Fin du programme ===" << std::endl;
    
    return 0;
}