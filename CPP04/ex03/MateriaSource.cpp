#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria* m) {
    int i = 0;
    while (i < 4 && this->materia[i])
        i++;
    if (i < 4)
        this->materia[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    if (type != "ice" && type != "cure")
        return NULL;
    int i = 0;
    while (i < 4 && this->materia[i]->getType() != type)
        i++;
    if (this->materia[i]->getType() == type)
        return (this->materia[i]->clone());
    return (0);
}

MateriaSource::MateriaSource(void) {
    std::cout << "MateriaSource Default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource& m) {
    std::cout << "MateriaSource Copy constructor called" << std::endl;
    *this = m;
}

MateriaSource::~MateriaSource(void) {
    std::cout << "MateriaSource Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        if (this->materia[i])
            delete this->materia[i];
}

MateriaSource& MateriaSource::operator=(MateriaSource& m) {
    std::cout << "MateriaSource Copy Assignment Operator called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i])
            delete this->materia[i];
        this->materia[i] = m.materia[i]->clone();
    }
    return (*this);
}
