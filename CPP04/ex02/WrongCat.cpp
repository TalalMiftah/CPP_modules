/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:38:04 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 17:38:05 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    std::cout << "WrongCat: Constructor Called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& Wrongcat) {
    std::cout << "WrongCat: Copy Constructor Called" << std::endl;
    *this = Wrongcat;
}

WrongCat& WrongCat::operator=(const WrongCat& Wrongcat) {
    std::cout << "WrongCat: Copy assignment operator Called" << std::endl;
    if (this != &Wrongcat)
        this->type = Wrongcat.type;
    return (*this);
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat: Destructor Called" << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << "Miaawwwwwwww" << std::endl;
}
