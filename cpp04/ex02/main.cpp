#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();
    
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    
    dog->makeSound(); // Affiche le son du chien
    cat->makeSound(); // Affiche le son du chat
    
    delete dog;
    delete cat;
    
    return 0;
}
