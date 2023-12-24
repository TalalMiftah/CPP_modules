/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:39:38 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 18:37:17 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		//****************************************//
		//        Orthodox Canonical Form         //
		//****************************************//
		MateriaSource(void);
		MateriaSource(MateriaSource& m);
		MateriaSource& operator=(MateriaSource& m);
		~MateriaSource(void);
		
		//****************************************//
		//         Overrided Functions            //
		//****************************************//
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif