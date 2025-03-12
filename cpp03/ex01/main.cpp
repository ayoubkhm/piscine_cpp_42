#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "----- Creating a ClapTrap -----" << std::endl;
    ClapTrap ct("CL4P-TP");
    ct.attack("a target");
    ct.takeDamage(4);
    ct.beRepaired(2);
    
    std::cout << "\n----- Creating a ScavTrap -----" << std::endl;
    ScavTrap st("Sc4v-Tr4p");
    st.attack("an enemy");
    st.takeDamage(20);
    st.beRepaired(10);
    st.guardGate();
    
    std::cout << "\n----- Testing copy and assignment for ScavTrap -----" << std::endl;
    ScavTrap st1("Alpha");
    ScavTrap st2(st1);
    st2 = st1;
    st2.guardGate();
    
    return 0;
}
