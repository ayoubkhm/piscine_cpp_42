#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(const std::string &name);
    FragTrap(void);
    FragTrap(const FragTrap &other);
    FragTrap &operator=(const FragTrap &other);
    ~FragTrap(void);
    void highFivesGuys(void);
};

#endif
