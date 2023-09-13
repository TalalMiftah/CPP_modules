/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:32:05 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/13 12:32:10 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack(){
    std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &w) {
    this->weapon = &w;
}

HumanB::HumanB(std::string name) {
    this->name = name;
}

HumanB::~HumanB(void) {
    return ;
}