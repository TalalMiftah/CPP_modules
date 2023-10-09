#include "Dog.hpp"

Dog::Dog(void) {
    std::cout << "Dog: Constructor Called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& dog) {
    std::cout << "Dog: Copy Constructor Called" << std::endl;
    *this = dog;
}

Dog& Dog::operator=(const Dog& dog) {
    std::cout << "Dog: Copy assignment operator Called" << std::endl;
    if (this != &dog)
    {
        this->type = dog.type;
        if (!this->brain)
            this->brain = new Brain(*dog.brain);
        else
            (*this->brain) = (*dog.brain);
    }
    return (*this);
}

Dog::~Dog(void) {
    std::cout << "Dog: Destructor Called" << std::endl;
    delete brain;
}

void Dog::makeSound(void) const {
    std::cout << "wouf wouf" << std::endl;
}
