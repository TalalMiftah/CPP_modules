/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:38:38 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 18:35:50 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include <string>

class ICharacter;

class Character : public ICharacter
{
    private :
        std::string name;
        AMateria* slot[4];
    public:
        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        Character(void);
        Character(const Character& c);
        Character& operator=(const Character& c);
        ~Character(void);

        //****************************************//
        //        Parameterized Constructor       //
        //****************************************//
        Character(std::string name);

        //****************************************//
        //         Overrided Functions            //
        //****************************************//
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif