#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal();
    AAnimal(const std::string &type);
    AAnimal(const AAnimal &other);
    AAnimal &operator=(const AAnimal &other);
    virtual ~AAnimal();

    // Méthode pure virtuelle pour rendre AAnimal abstraite
    virtual void makeSound() const = 0;

    std::string getType() const;
};

#endif
