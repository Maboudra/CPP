#include "ClapTrap.hpp"

int main()
{
    ClapTrap c1("Clappy");
    ClapTrap c2("Bobby");

    std::cout << "\n--- Attaque ---" << std::endl;
    c1.attack("Bobby");
    c2.takeDamage(c1.getAttackDamage());

    std::cout << "\n--- Dégâts ---" << std::endl;
    c1.takeDamage(5);
    c2.takeDamage(12); // mort

    std::cout << "\n--- Réparations ---" << std::endl;
    c1.beRepaired(3);
    c2.beRepaired(4); // impossible

    std::cout << "\n--- Épuisement de l'énergie ---" << std::endl;
    int i = 0;
    while (i < 10)
    {
        c1.attack("Mur");
        i++;
    }

    c1.attack("Trop tard..."); // plus d’énergie

    return 0;
}

