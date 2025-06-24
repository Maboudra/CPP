#include "ClapTrap.hpp"

// Constructeur
ClapTrap::ClapTrap(const std::string& name)
{
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;

    std::cout << "ClapTrap " << _name << " constructed (HP:" << _hitPoints
              << ", EP:" << _energyPoints << ", DMG:" << _attackDamage << ")" << std::endl;
}

// Constructeur de copie
ClapTrap::ClapTrap(const ClapTrap& other)
{
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
}

// Opérateur d’affectation
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

// Destructeur
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destroyed." << std::endl;
}

// Attaque
void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't attack: no hit points left!" << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't attack: no energy left!" << std::endl;
        return;
    }

    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage! "
              << "(EP left: " << _energyPoints << ")" << std::endl;
}

// Subit des dégâts
void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is already destroyed." << std::endl;
        return;
    }

    if (amount >= _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;

    std::cout << "ClapTrap " << _name << " takes " << amount
              << " damage! (HP left: " << _hitPoints << ")" << std::endl;
}

// Réparation
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't repair: it's destroyed." << std::endl;
        return;
    }

    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " can't repair: no energy left!" << std::endl;
        return;
    }

    _energyPoints--;
    _hitPoints += amount;

    std::cout << "ClapTrap " << _name << " repairs itself, regaining "
              << amount << " hit points! (HP: " << _hitPoints
              << ", EP left: " << _energyPoints << ")" << std::endl;
}

// Getters
unsigned int ClapTrap::getHitPoints() const { return _hitPoints; }
unsigned int ClapTrap::getEnergyPoints() const { return _energyPoints; }
unsigned int ClapTrap::getAttackDamage() const { return _attackDamage; }
