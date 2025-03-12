#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal constructed with type: " << type << std::endl;
}

AAnimal::AAnimal(const std::string &type) : type(type)
{
    std::cout << "AAnimal constructed with type: " << type << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
    *this = other;
    std::cout << "AAnimal copy-constructed with type: " << type << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    if (this != &other)
        type = other.type;
    std::cout << "AAnimal assigned with type: " << type << std::endl;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructed with type: " << type << std::endl;
}

std::string AAnimal::getType() const
{
    return type;
}
