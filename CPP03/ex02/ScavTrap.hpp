/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:32:22 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/02 21:53:22 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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