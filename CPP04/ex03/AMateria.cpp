/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:38:21 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 17:38:22 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
    std::cout << "AMateria Parameterized constructor called" << std::endl;
    this->type = type;
}
AMateria::AMateria(void) {
    std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::~AMateria(void) {
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const {
    return (this->type);
}

void AMateria::use(ICharacter& target) {
    (void)target;
}
