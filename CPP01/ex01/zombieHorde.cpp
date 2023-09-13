/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:11:37 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/13 12:37:54 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombie[i].setZombieName(name);
    return (zombie);
}