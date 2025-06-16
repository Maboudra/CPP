#include "Harl.hpp"
#include <iostream>

int main() {
    Harl harl;
    
    std::cout << "=== Test de tous les niveaux de plaintes de Harl ===" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test DEBUG:" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;
    
    std::cout << "Test INFO:" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;
    
    std::cout << "Test WARNING:" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;
    
    std::cout << "Test ERROR:" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;
    
    std::cout << "=== Test avec des niveaux invalides ===" << std::endl;
    std::cout << "Test avec un niveau inconnu:" << std::endl;
    harl.complain("CRITICAL");
    std::cout << std::endl;
    
    std::cout << "Test avec minuscules:" << std::endl;
    harl.complain("debug");
    std::cout << std::endl;
    
    std::cout << "Test avec chaîne vide:" << std::endl;
    harl.complain("");
    std::cout << std::endl;
    
    std::cout << "=== Harl se plaint énormément (test répétitif) ===" << std::endl;
    std::cout << "Simulation d'une journée difficile pour Harl:" << std::endl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("ERROR");
    harl.complain("WARNING");
    harl.complain("INFO");
    std::cout << std::endl;
    
    std::cout << "=== Test de stress : Harl en colère ===" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "Plainte #" << (i + 1) << ":" << std::endl;
        harl.complain("ERROR");
    }
    
    std::cout << std::endl;
    std::cout << "Harl a fini de se plaindre... pour l'instant." << std::endl;
    
    return 0;
}