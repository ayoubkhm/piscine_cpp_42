#include "ClapTrap.hpp"

int main()
{
    ClapTrap robot("R2-D2");
    
    robot.attack("Target Dummy");
    robot.takeDamage(3);
    robot.beRepaired(5);
    robot.attack("Another Target");
    robot.takeDamage(20);
    robot.attack("Yet Another Target");
    
    return 0;
}
