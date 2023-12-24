/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:37:06 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 17:37:07 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& b) {
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = b;
}

Brain& Brain::operator=(const Brain& b) {
    std::cout << "Brain copy assignement operator called" << std::endl;
    if (this != &b)
    {
        for (int i = 0; i < 100; ++i) {
            this->ideas[i] = b.ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain(void) {
    std::cout << "Brain Destructor called" << std::endl;
}
