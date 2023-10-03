/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:48:28 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/02 21:48:29 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(FragTrap &f);
        FragTrap(std::string name);
        FragTrap& operator=(const FragTrap& f);
        ~FragTrap(void);
        void highFivesGuys(void);
};

#endif