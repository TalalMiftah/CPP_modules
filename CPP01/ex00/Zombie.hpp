/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:42:24 by tmiftah           #+#    #+#             */
/*   Updated: 2023/07/20 08:42:25 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void    annouce(void);
        void    setZombie(std::string name);
};

void    randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif