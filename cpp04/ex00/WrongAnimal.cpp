#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructed with type: " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
    std::cout << "WrongAnimal copy-constructed with type: " << type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
        type = other.type;
    std::cout << "WrongAnimal assigned with type: " << type << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructed with type: " << type << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Some generic wrong animal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}
