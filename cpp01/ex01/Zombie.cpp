#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Zombie " << this->_name << " created" << std::endl;
}

Zombie::Zombie(void)
{
    this->_name = "(null)";
    std::cout << "Zombie " << this->_name << " create" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " destroyed" << std::endl;
}


void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}


void    Zombie::setName(std::string name)
{
    this->_name=name;
}
