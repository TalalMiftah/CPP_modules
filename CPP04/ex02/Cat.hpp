/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:37:19 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 18:24:47 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include <iostream> 
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        Cat(void);
        Cat(const Cat& cat);
        Cat& operator=(const Cat& cat);
        ~Cat(void);
        
        //****************************************//
        //           Overrided Function           //
        //****************************************//
        void makeSound(void) const;
        
        //****************************************//
        //                 Method                 //
        //****************************************//
        void setType(std::string type);
};

#endif
