/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:31:54 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/13 12:31:55 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

void    HumanA::attack(){
    std::cout << this->name << " attacks with their " << w1.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& w) : name(name) , w1(w)
{

}

HumanA::~HumanA(void)
{
	return ;
}