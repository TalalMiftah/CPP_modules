/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:30:51 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/02 21:30:52 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap {
    private :
        std::string name;
        int hit_point;
        int energy_point;
        int attack_damage;
    public :

        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        ClapTrap(void); // default constructor
        ClapTrap(const ClapTrap& c); // copy constructor
        ClapTrap(const std::string name); // initialize constructor
        ClapTrap& operator=(const ClapTrap& c); // copy assingnement operator
        ~ClapTrap(void); // destructor

        //****************************************//
        //        make clap more realistic        //
        //****************************************//
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        //****************************************//
        //         getters of attributes          //
        //****************************************//
        int getEnergyPoint(void);
        int getHitPoint(void);
        int getAttackDamage(void);
        const std::string getName(void);
};

#endif