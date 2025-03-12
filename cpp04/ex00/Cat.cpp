#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructed." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    *this = other;
    std::cout << "Cat copy-constructed." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
        Animal::operator=(other);
    std::cout << "Cat assigned." << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructed." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow! Meow!" << std::endl;
}
