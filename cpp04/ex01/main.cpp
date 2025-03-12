#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    const int ARRAY_SIZE = 4;
    Animal* animals[ARRAY_SIZE];

    // Remplir le tableau : la moitié de Dog, la moitié de Cat
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (i < ARRAY_SIZE / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n--- Animals making sound ---\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << animals[i]->getType() << " : ";
        animals[i]->makeSound();
    }

    std::cout << "\n--- Deleting animals ---\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        delete animals[i];
    }

    return 0;
}
