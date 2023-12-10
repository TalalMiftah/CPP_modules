#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Cat: Constructor Called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& cat) {
    std::cout << "Cat: Copy Constructor Called" << std::endl;
    this->brain = new Brain(*cat.brain);
}

Cat& Cat::operator=(const Cat& cat) {
    std::cout << "Cat: Copy assignment operator Called" << std::endl;
    if (this != &cat)
    {
        this->type = cat.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*cat.brain);
    }
    return (*this);
}

Cat::~Cat(void) {
    std::cout << "Cat: Destructor Called" << std::endl;
    delete brain;
}

void Cat::makeSound(void) const {
    std::cout << "Miaawwwwwwww" << std::endl;
}

void Cat::setType(std::string type) {
    this->type = type;
}