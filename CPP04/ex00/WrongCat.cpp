#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    std::cout << "WrongCat: Constructor Called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& Wrongcat) {
    std::cout << "WrongCat: Copy Constructor Called" << std::endl;
    *this = Wrongcat;
}

WrongCat& WrongCat::operator=(const WrongCat& Wrongcat) {
    std::cout << "WrongCat: Copy assignment operator Called" << std::endl;
    if (this != &Wrongcat)
        this->type = Wrongcat.type;
    return (*this);
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat: Destructor Called" << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << "Miaawwwwwwww" << std::endl;
}
