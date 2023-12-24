/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:36:59 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 17:36:59 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <string>

    //**************************//
    //    Our Abstract Class    //
    //**************************//
class Animal
{
    protected:
        std::string type;
    public:
        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        Animal(void);
        Animal(const Animal& animal);
        Animal& operator=(const Animal& animal);
        virtual ~Animal();

        //****************************************//
        //                 Method                 //
        //****************************************//
        std::string getType() const;

        //****************************************//
        //          Pure Virtual Function         //
        //****************************************//
        virtual void makeSound(void) const = 0;
};


#endif