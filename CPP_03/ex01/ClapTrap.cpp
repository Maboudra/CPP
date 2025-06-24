#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
{
    _name         = name;
    _hitPoints    = 10;
    _energyPoints = 10;
    _attackDamage = 0;

    std::cout << "ClapTrap " << _name << " constructed (HP:" << _hitPoints
              << ", EP:" << _energyPoints << ", DMG:" << _attackDamage << ")" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    _name         = other._name;
    _hitPoints    = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        _name         = other._name;
        _hitPoints    = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destroyed." << std::endl;
}

/* ---------- actions identiques à la version précédente ---------- */
void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
    { std::cout << "ClapTrap " << _name << " can't attack: no HP!\n"; return; }
    if (_energyPoints == 0)
    { std::cout << "ClapTrap " << _name << " can't attack: no EP!\n"; return; }

    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " damage! (EP left: "
              << _energyPoints << ")\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    { std::cout << "ClapTrap " << _name << " is already destroyed.\n"; return; }

    _hitPoints = (amount >= _hitPoints) ? 0 : _hitPoints - amount;

    std::cout << "ClapTrap " << _name << " takes " << amount
              << " damage! (HP left: " << _hitPoints << ")\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
    { std::cout << "ClapTrap " << _name << " can't repair: destroyed.\n"; return; }
    if (_energyPoints == 0)
    { std::cout << "ClapTrap " << _name << " can't repair: no EP!\n"; return; }

    _energyPoints--;
    _hitPoints += amount;

    std::cout << "ClapTrap " << _name << " repairs itself for "
              << amount << " HP! (HP:" << _hitPoints
              << ", EP left:" << _energyPoints << ")\n";
}

unsigned int ClapTrap::getHitPoints()    const { return _hitPoints; }
unsigned int ClapTrap::getEnergyPoints() const { return _energyPoints; }
unsigned int ClapTrap::getAttackDamage() const { return _attackDamage; }
