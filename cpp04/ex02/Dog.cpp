#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    brain = new Brain();
    std::cout << "Dog constructed." << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
    brain = new Brain(*(other.brain));
    std::cout << "Dog copy-constructed." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        AAnimal::operator=(other);
        if (brain)
            delete brain;
        brain = new Brain(*(other.brain));
    }
    std::cout << "Dog assigned." << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructed." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}
