#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Cat: Constructor Called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& cat) {
    std::cout << "Cat: Copy Constructor Called" << std::endl;
    *this = cat;
}

Cat& Cat::operator=(const Cat& cat) {
    std::cout << "Cat: Copy assignment operator Called" << std::endl;
    if (this != &cat)
        this->type = cat.type;
    return (*this);
}

Cat::~Cat(void) {
    std::cout << "Cat: Destructor Called" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << "Miaawwwwwwww" << std::endl;
}
