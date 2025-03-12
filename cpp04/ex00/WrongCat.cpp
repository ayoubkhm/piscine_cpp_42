#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat constructed." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    *this = other;
    std::cout << "WrongCat copy-constructed." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
        WrongAnimal::operator=(other);
    std::cout << "WrongCat assigned." << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructed." << std::endl;
}

void WrongCat::makeSound() const
{
    // Comme makeSound() n'est pas virtuelle dans WrongAnimal, si on l'appelle via un pointeur WrongAnimal,
    // c'est la version de WrongAnimal qui sera appelée.
    std::cout << "Meow? (WrongCat sound)" << std::endl;
}
