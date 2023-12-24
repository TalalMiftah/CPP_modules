/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:35:02 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 21:03:03 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

        std::cout << std::endl;
        std::cout << "j type : " << j->getType() << std::endl; // will print => Dog
        std::cout << "j sound: ";
        j->makeSound(); //  Dog's makesound()

        std::cout << std::endl;
        std::cout << "i type : " << i->getType() << std::endl; // will print => Cat
        std::cout << "i sound: ";
        i->makeSound(); //  Cat's makesound()
        
        std::cout << std::endl;
        std::cout << "meta type : " << meta->getType() << std::endl; // will print => Animal
        std::cout << "meta sound: ";
        meta->makeSound(); //  Animal's makesound()
        std::cout << std::endl;

        delete i;
        delete j;
        delete meta;
    }
    {
        std::cout << std::endl;
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