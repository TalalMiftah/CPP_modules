/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:42:03 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/13 11:09:17 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie *z1 = newZombie("Foo");
    z1->annouce();
    delete z1;
    randomChump("Foo2");
    Zombie *z2 = newZombie("Tobi");
    z2->annouce();
    delete z2;
    randomChump("goCrazy");
}