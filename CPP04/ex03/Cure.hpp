#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
	public:

		//****************************************//
		//        Orthodox Canonical Form         //
		//****************************************//
		Cure(void);
		Cure(const Cure& Cure);
		Cure& operator=(const Cure& cure);
		~Cure(void);

		std::string const & getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};


#endif