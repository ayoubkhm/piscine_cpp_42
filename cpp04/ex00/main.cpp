#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "----- Testing Animal Polymorphism -----" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    cat->makeSound();
    dog->makeSound();
    meta->makeSound();
    
    std::cout << "\n----- Testing WrongAnimal Polymorphism -----" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << wrongCat->getType() << std::endl;
    wrongCat->makeSound();

    delete meta;
    delete dog;
    delete cat;
    delete wrongMeta;
    delete wrongCat;
    
    return 0;
}
