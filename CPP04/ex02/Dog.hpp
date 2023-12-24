/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:37:27 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 18:25:00 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include <iostream> 
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private: 
        Brain *brain;
    public:
        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        Dog(void);
        Dog(const Dog& dog);
        Dog& operator=(const Dog& dog);
        ~Dog(void);
        
        //****************************************//
        //           Overrided Function           //
        //****************************************//
        void makeSound(void) const;
};

#endif
