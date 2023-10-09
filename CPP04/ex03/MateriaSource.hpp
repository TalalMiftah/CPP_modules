#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include <string>

class IMateriaSource;

class MateriaSource : public IMateriaSource
{
	private :
		AMateria* materia[4];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource& m);
		MateriaSource& operator=(MateriaSource& m);
		~MateriaSource(void);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif