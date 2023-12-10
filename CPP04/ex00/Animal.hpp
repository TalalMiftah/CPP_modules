#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(const Animal& animal);
        Animal& operator=(const Animal& animal);
        virtual ~Animal(); 
        virtual void makeSound(void) const;
        std::string getType() const;
};


#endif