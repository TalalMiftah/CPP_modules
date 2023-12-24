/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:38:58 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 18:36:22 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

		//****************************************//
		//         Overrided Functions            //
		//****************************************//
		std::string const & getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};


#endif