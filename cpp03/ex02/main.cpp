#include "FragTrap.hpp"

int main()
{
    std::cout << "----- Creating a FragTrap -----" << std::endl;
    FragTrap ft("Fraggy");
    ft.attack("an enemy");
    ft.takeDamage(20);
    ft.beRepaired(10);
    ft.highFivesGuys();

    std::cout << "\n----- Testing for FragTrap -----" << std::endl;
    FragTrap ft2(ft);
    ft2 = ft;
    ft2.highFivesGuys();

    return 0;
}
