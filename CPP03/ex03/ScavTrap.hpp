/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:58:16 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/02 21:58:17 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public :
        ScavTrap(void);
        ScavTrap(ScavTrap& c);
        ScavTrap(std::string name);
        ScavTrap& operator=(const ScavTrap& s);
        ~ScavTrap(void);
        void attack(const std::string& target);
        void guardGate();
};

#endif