/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:42:33 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/13 18:51:57 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::annouce() {
    std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setZombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << ": destructor called" << std::endl;
}

Zombie::Zombie(void)
{
    return ;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}
