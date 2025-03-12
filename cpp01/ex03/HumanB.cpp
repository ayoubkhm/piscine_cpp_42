#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
    std::cout << "HumanB " << name << " created with no weapon" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "HumanB " << this->_name << " has been destroyed" << std::endl;
}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon; 
}
