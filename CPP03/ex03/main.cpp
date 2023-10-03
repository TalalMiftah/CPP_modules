/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:48:36 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/02 21:48:37 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main ()
{
    DiamondTrap d1("K-Dot");

    std::cout << "Hit point " << d1.getHitPoint() << " | Energy point " << d1.getEnergyPoint() << std::endl;
    d1.attack("KKK"); // hit-point 100 // energy 49 // nad this function will be the same as Scav
    std::cout << "Hit point " << d1.getHitPoint() << " | Energy point " << d1.getEnergyPoint() <<  std::endl;
    d1.takeDamage(10); // hit-point 90  // energy 49
    std::cout << "Hit point " << d1.getHitPoint() << " | Energy point " << d1.getEnergyPoint() << std::endl;
    d1.beRepaired(80); // hit-point 170 // energy 48
    std::cout << "Hit point " << d1.getHitPoint() << " | Energy point " << d1.getEnergyPoint() << std::endl;
    d1.whoAmI();
}