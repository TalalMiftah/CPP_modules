/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:32:24 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/13 14:45:07 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType(){
    std::string& str = this->type;
    return str;
}

void Weapon::setType(std::string type){
    this->type = type;
}

Weapon::Weapon(std::string type) {
    this->type = type;
}

Weapon::~Weapon(void) {
    return ;
}

Weapon::Weapon(void) {
    return ;
}