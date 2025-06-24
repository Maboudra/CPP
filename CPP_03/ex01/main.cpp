#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== Création de ScavTrap ===" << std::endl;
    ScavTrap s1("Scavy");

    std::cout << "\n=== Actions ===" << std::endl;
    s1.attack("intruder");
    s1.takeDamage(30);
    s1.beRepaired(20);
    s1.guardGate();

    std::cout << "\n=== Copie et affectation ===" << std::endl;
    ScavTrap s2(s1);      // constructeur de copie
    ScavTrap s3("Dummy");
    s3 = s1;              // opérateur d’affectation

    std::cout << "\n=== Fin du scope main ===" << std::endl;
    return 0;             // déclenche la destruction en ordre inverse
}
