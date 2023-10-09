#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
	public:

		//****************************************//
		//        Orthodox Canonical Form         //
		//****************************************//
		Ice(void);
		Ice(const Ice& ice);
		Ice& operator=(const Ice& ice);
		~Ice(void);

		std::string const & getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};


#endif