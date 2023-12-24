/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:35:24 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 17:55:55 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include <iostream> 
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        WrongCat(void);
        WrongCat(const WrongCat& Wrongcat);
        WrongCat& operator=(const WrongCat& Wrongcat);
        ~WrongCat(void);
        
        //****************************************//
        //           Overrided function           //
        //****************************************//
        void makeSound(void) const;
};

#endif
