/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:34:50 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 17:46:57 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include <iostream> 
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
    public:
        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        Cat(void);
        Cat(const Cat& cat);
        Cat& operator=(const Cat& cat);
        ~Cat(void);
        
        //****************************************//
        //           Overrided function           //
        //****************************************//
        void makeSound(void) const;
};

#endif
