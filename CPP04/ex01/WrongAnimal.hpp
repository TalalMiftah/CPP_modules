/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:36:28 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 18:13:20 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& Wronganimal);
        WrongAnimal& operator=(const WrongAnimal& Wronganimal);
        ~WrongAnimal();
                
        //****************************************//
        //                Methods                 //
        //****************************************//
        void makeSound(void) const;
        std::string getType() const;
};


#endif