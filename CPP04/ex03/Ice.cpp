#include "Ice.hpp"

Ice::Ice(void) {
    std::cout << "Ice Default Constructor Called" << std::endl;
    this->type = "ice";
}

Ice::Ice(const Ice& ice) {
    std::cout << "Ice Copy Constructor Called" << std::endl;
    *this = ice;
}

Ice& Ice::operator=(const Ice& ice) {
    std::cout << "Ice Copy Assignment Operator Called" << std::endl;
    this->type = ice.type;
    return (*this);
}

Ice::~Ice(void) {
    std::cout << "Ice Destructor Called" << std::endl;
}

std::string const & Ice::getType() const {
    return this->type;
}

AMateria* Ice::clone() const {
    return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}