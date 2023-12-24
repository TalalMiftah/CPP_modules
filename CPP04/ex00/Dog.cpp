/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:34:54 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 17:34:55 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
    std::cout << "Dog: Constructor Called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& dog) {
    std::cout << "Dog: Copy Constructor Called" << std::endl;
    *this = dog;
}

Dog& Dog::operator=(const Dog& dog) {
    std::cout << "Dog: Copy assignment operator Called" << std::endl;
    if (this != &dog)
        this->type = dog.type;
    return (*this);
}

Dog::~Dog(void) {
    std::cout << "Dog: Destructor Called" << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << "wouf wouf" << std::endl;
}
