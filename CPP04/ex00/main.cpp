
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        std::cout << "================= Example with overriding ==================" << std::endl;
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << "j: " << j->getType() << std::endl; // will print => Dog
        std::cout << "i: " << i->getType() << std::endl; // will print => Cat

        std::cout << std::endl;
        std::cout << "i sound: ";
        i->makeSound(); //will print Cat's makesound()
        std::cout << "j sound: ";
        j->makeSound(); //will print Dog's makesound()
        std::cout << "meta sound: ";
        meta->makeSound(); //will print Animal's makesound()
        std::cout << std::endl;

        delete i;
        delete j;
        delete meta;
    }
    {
        std::cout << "================= Example without overriding ===============" << std::endl;
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();

        std::cout << "meta : " << meta->getType() << std::endl; // will print => Dog
        std::cout << "i : " << i->getType() << std::endl; // will print => Cat

        std::cout << "i sound : ";
        i->makeSound(); //will print Animal's makesound()
        std::cout << "meta sound : ";
        meta->makeSound(); //will print Animal's makesound()

        delete i;
        delete meta;
    }
    return 0;
}