#include "Harl.hpp"
#include <iostream>

void Harl::debug(void) {
    std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    // Tableau des niveaux possibles
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    // Tableau de pointeurs vers les fonctions membres
    void (Harl::*functions[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    
    // Recherche du niveau et appel de la fonction correspondante
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*functions[i])();
            return;
        }
    }
    
    // Si le niveau n'est pas trouvé
    std::cout << "[UNKNOWN] Harl doesn't know how to complain about: " << level << std::endl;
}