/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:34:58 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 17:52:13 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include <iostream> 
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		//****************************************//
		//        Orthodox Canonical Form         //
		//****************************************//
		Dog(void);
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);
		~Dog(void);
		
		//****************************************//
		//           Overrided function           //
		//****************************************//
		void makeSound(void) const;
};

#endif
