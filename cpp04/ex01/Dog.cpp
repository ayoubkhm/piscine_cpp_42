#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    brain = new Brain();
    std::cout << "Dog constructed." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    brain = new Brain(*(other.brain));
    std::cout << "Dog copy-constructed." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
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
