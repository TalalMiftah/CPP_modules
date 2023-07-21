/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:42:33 by tmiftah           #+#    #+#             */
/*   Updated: 2023/07/20 08:42:34 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::annouce() {
    std::cout << name << ":  BraiiiiiiinnnzzzZ...\n";
}

void    Zombie::setZombie(std::string name) {
    this->name = name;
}