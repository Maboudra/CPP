#include "FragTrap.hpp"

/* ---------- construction / destruction ---------- */

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _hitPoints    = 100;
    _energyPoints = 100;
    _attackDamage = 30;

    std::cout << "FragTrap " << _name << " constructed (HP:" << _hitPoints
              << ", EP:" << _energyPoints << ", DMG:" << _attackDamage << ")" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap " << _name << " copied." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    ClapTrap::operator=(other);
    std::cout << "FragTrap " << _name << " assigned." << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destroyed." << std::endl;
}

/* ---------- comportement spécifique ---------- */

void FragTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
    {
        std::cout << "FragTrap " << _name << " can't attack: no HP!\n";
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "FragTrap " << _name << " can't attack: no EP!\n";
        return;
    }

    _energyPoints--;
    std::cout << "FragTrap " << _name << " powerfully attacks " << target
              << ", causing " << _attackDamage << " points of damage! "
              << "(EP left: " << _energyPoints << ")\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a positive high five! ✋" << std::endl;
}
