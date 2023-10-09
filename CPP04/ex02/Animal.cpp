#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "Animal: Constructor Called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal& animal) {
    std::cout << "Animal: Copy Constructor" << std::endl;
    if (this != &animal)
        *this = animal;
}

Animal& Animal::operator=(const Animal& animal) {
    std::cout << "Animal: copy assignment operator" << std::endl;
    if (this != &animal)
        this->type = animal.type;
    return (*this);
}

Animal::~Animal() {
    std::cout << "Animal: Destructor Called" << std::endl;
}

std::string Animal::getType() const{
    return (this->type);
}