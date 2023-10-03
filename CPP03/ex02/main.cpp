/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:32:10 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/02 22:53:19 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
    FragTrap f1("K-Dot");

    std::cout << "Hit point " << f1.getHitPoint() << " | Energy point " << f1.getEnergyPoint() << std::endl;
    f1.attack("KKK"); // hit-point 100 // energy 99 // this function will be the same as Clap
    std::cout << "Hit point " << f1.getHitPoint() << " | Energy point " << f1.getEnergyPoint() <<  std::endl;
    f1.takeDamage(10); // hit-point 90  // energy 99
    std::cout << "Hit point " << f1.getHitPoint() << " | Energy point " << f1.getEnergyPoint() << std::endl;
    f1.beRepaired(80); // hit-point 170 // energy 98
    std::cout << "Hit point " << f1.getHitPoint() << " | Energy point " << f1.getEnergyPoint() << std::endl;
    f1.highFivesGuys();
}