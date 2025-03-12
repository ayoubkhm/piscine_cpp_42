#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
    int i = 5;
    int j = 0;

    Zombie *horde = zombieHorde(i, "zob");
    while(i > j)
    {
        horde[j].announce();
        j++;
    }
    delete[] horde;
}
