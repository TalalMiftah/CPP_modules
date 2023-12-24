/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:35:51 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 18:08:10 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];
    public:
        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        Brain(void);
        Brain(const Brain& b);
        Brain& operator=(const Brain& b);
        ~Brain(void);
};

#endif