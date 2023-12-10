#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

void    fun() {
    system("leaks Animal");
}

int main()
{
    atexit(fun);
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    me->equip(new Ice());
    me->equip(new Ice());
    me->equip(new Ice());
    me->equip(new Ice());
    me->equip(new Ice());
    me->equip(new Ice());
    me->equip(new Ice());
    me->unequip(0);
    delete tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
    return 0;
}