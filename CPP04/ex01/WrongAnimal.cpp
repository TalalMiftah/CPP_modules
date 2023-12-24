/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:36:22 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 17:36:23 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    std::cout << "WrongAnimal: Constructor Called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& Wronganimal) {
    std::cout << "WrongAnimal: Copy Constructor" << std::endl;
    if (this != &Wronganimal)
        *this = Wronganimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& Wronganimal) {
    std::cout << "WrongAnimal: copy assignment operator" << std::endl;
    if (this != &Wronganimal)
        this->type = Wronganimal.type;
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal: Destructor Called" << std::endl;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "Make Sound" << std::endl;
}

std::string WrongAnimal::getType() const{
    return (this->type);
}
