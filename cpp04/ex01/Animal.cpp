#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructed with type: " << type << std::endl;
}

Animal::Animal(const std::string &type) : type(type)
{
    std::cout << "Animal constructed with type: " << type << std::endl;
}

Animal::Animal(const Animal &other)
{
    *this = other;
    std::cout << "Animal copy-constructed with type: " << type << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
        type = other.type;
    std::cout << "Animal assigned with type: " << type << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructed with type: " << type << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Some generic animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}
