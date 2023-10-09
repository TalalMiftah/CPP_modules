#include "Character.hpp"

Character::Character(void) {
    std::cout << "Character Default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->slot[i] = NULL;
    this->name = "name";
}

Character::Character(std::string name) {
    std::cout << "Character Parameterized constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->slot[i] = NULL;
    this->name = name;
}

Character::Character(const Character& c) {
    std::cout << "Character Copy Constructor Called" << std::endl;
    *this = c;
}

Character& Character::operator=(const Character& c) {
    std::cout << "Character Copy Assignment Operator Called" << std::endl;
    this->name = c.name;
    for (int i = 0; i < 4; i++)
    {
        if (this->slot[i])
            delete slot[i];
        this->slot[i] = c.slot[i]->clone();
    }
    return (*this);
}

Character::~Character(void) {
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->slot[i])
            delete this->slot[i];
    }
}

std::string const & Character::getName() const {
    return this->name;
}

void Character::equip(AMateria* m) {
    int i = 0;
    while (i < 4 && this->slot[i])
        i++;
    if (i < 4)
        this->slot[i] = m;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx <= 3)
        this->slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx <= 3)
        this->slot[idx]->use(target);
}
