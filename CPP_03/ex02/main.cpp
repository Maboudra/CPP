#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "=== Création d'un ClapTrap ===" << std::endl;
    ClapTrap clap("Clappy");

    std::cout << "\n=== Actions ClapTrap ===" << std::endl;
    clap.attack("dummy target");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n=== Création d'un ScavTrap ===" << std::endl;
    ScavTrap scav("Scavy");

    std::cout << "\n=== Actions ScavTrap ===" << std::endl;
    scav.attack("bandit");
    scav.takeDamage(40);
    scav.beRepaired(20);
    scav.guardGate();

    std::cout << "\n=== Création d'un FragTrap ===" << std::endl;
    FragTrap frag("Fraggy");

    std::cout << "\n=== Actions FragTrap ===" << std::endl;
    frag.attack("enemy robot");
    frag.takeDamage(60);
    frag.beRepaired(40);
    frag.highFivesGuys();

    std::cout << "\n=== Copie et affectation FragTrap ===" << std::endl;
    FragTrap frag2(frag);           // Constructeur de copie
    FragTrap frag3("Placeholder");
    frag3 = frag;                   // Opérateur d'affectation

    std::cout << "\n=== Fin du main (destructeurs appelés) ===" << std::endl;
    return 0;
}
