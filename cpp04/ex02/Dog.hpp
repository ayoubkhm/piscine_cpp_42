#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
    Brain* brain;
public:
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    virtual ~Dog();

    virtual void makeSound() const;
};

#endif
