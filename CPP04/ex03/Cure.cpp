#include "Cure.hpp"

Cure::Cure(void) {
    std::cout << "Cure Default Constructor Called" << std::endl;
    this->type = "cure";
}

Cure::Cure(const Cure& cure) {
    std::cout << "Cure Copy Constructor Called" << std::endl;
    *this = cure;
}

Cure& Cure::operator=(const Cure& cure) {
    std::cout << "Cure Copy Assignment Operator Called" << std::endl;
    this->type = cure.type;
    return (*this);
}

Cure::~Cure(void) {
    std::cout << "Cure Destructor Called" << std::endl;
}

std::string const & Cure::getType() const {
    return this->type;
}

AMateria* Cure::clone() const {
    return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}