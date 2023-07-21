/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:11:27 by tmiftah           #+#    #+#             */
/*   Updated: 2023/07/20 11:18:55 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::setZombieName(std::string name){
    this->name = name;
}

void    Zombie::annouce(void){
        std::cout << name << ": : BraiiiiiiinnnzzzZ...\n";
}