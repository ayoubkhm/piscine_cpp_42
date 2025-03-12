#include "ClapTrap.hpp"

// Constructeur qui prend un nom en paramètre
ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " constructed." << std::endl;
}

// Constructeur par défaut (utilise un nom par défaut)
ClapTrap::ClapTrap(void)
    : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " constructed (default)." << std::endl;
}

// Constructeur de copie
ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "ClapTrap " << _name << " copy-constructed." << std::endl;
}

// Opérateur d'affectation
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap " << _name << " assigned." << std::endl;
    return *this;
}

// Destructeur
ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << _name << " destructed." << std::endl;
}

// La fonction d'attaque
void ClapTrap::attack(const std::string &target)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        _energyPoints--; // Coût d'une unité d'énergie
        std::cout << "ClapTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " can't attack (insufficient hit points or energy)!" << std::endl;
    }
}

// Fonction de prise de dégat
void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is already down!" << std::endl;
        return;
    }
    _hitPoints -= amount;
    if (_hitPoints < 0)
        _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage. Remaining hit points: " << _hitPoints << std::endl;
}

// La fonction pour se réparer
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        _energyPoints--; // Coût d'une unité d'énergie
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " repairs itself for " << amount 
                  << " hit points. New hit points: " << _hitPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " can't repair (insufficient hit points or energy)!" << std::endl;
    }
}
