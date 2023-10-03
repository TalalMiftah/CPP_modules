/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:31:08 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/02 21:31:09 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
    ScavTrap s1("K-Dot");

    std::cout << "Hit point " << s1.getHitPoint() << " | Energy point " << s1.getEnergyPoint() << std::endl;
    s1.attack("KKK"); // hit-point 100 // energy 49
    std::cout << "Hit point " << s1.getHitPoint() << " | Energy point " << s1.getEnergyPoint() <<  std::endl;
    s1.takeDamage(10); // hit-point 90  // energy 49
    std::cout << "Hit point " << s1.getHitPoint() << " | Energy point " << s1.getEnergyPoint() << std::endl;
    s1.beRepaired(80); // hit-point 170 // energy 48
    std::cout << "Hit point " << s1.getHitPoint() << " | Energy point " << s1.getEnergyPoint() << std::endl;
    s1.guardGate();
}