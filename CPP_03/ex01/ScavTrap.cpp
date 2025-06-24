#include "ScavTrap.hpp"

/* ---------- construction / destruction ---------- */
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    _hitPoints    = 100;
    _energyPoints = 50;
    _attackDamage = 20;

    std::cout << "ScavTrap " << _name << " constructed (HP:" << _hitPoints
              << ", EP:" << _energyPoints << ", DMG:" << _attackDamage << ")" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << _name << " copied." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    ClapTrap::operator=(other);
    std::cout << "ScavTrap " << _name << " assigned." << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " destroyed." << std::endl;
}

/* ---------- comportement spécifique ---------- */
void ScavTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
    { std::cout << "ScavTrap " << _name << " can't attack: no HP!\n"; return; }
    if (_energyPoints == 0)
    { std::cout << "ScavTrap " << _name << " can't attack: no EP!\n"; return; }

    _energyPoints--;
    std::cout << "ScavTrap " << _name << " fiercely attacks " << target
              << ", inflicting " << _attackDamage << " points of damage! "
              << "(EP left: " << _energyPoints << ")\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode.\n";
}
