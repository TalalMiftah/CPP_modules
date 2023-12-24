/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:38:49 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 18:35:34 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

		//****************************************//
		//         Overrided Functions            //
		//****************************************//
		std::string const & getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};


#endif