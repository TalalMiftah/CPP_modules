/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:11:46 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/13 20:32:44 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int size = 10;
    Zombie *z1 = zombieHorde(size, "Foo");
    for (int i = 0; i < size; i++)
        z1[i].annouce();
    delete[] z1;
    return 0;
}