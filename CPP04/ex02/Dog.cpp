/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:37:23 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/10 17:37:24 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
    std::cout << "Dog: Constructor Called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& dog) {
    std::cout << "Dog: Copy Constructor Called" << std::endl;
    this->brain = new Brain(*dog.brain);
}

Dog& Dog::operator=(const Dog& dog) {
    std::cout << "Dog: Copy assignment operator Called" << std::endl;
    if (this != &dog)
    {
        this->type = dog.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*dog.brain);
    }
    return (*this);
}

Dog::~Dog(void) {
    std::cout << "Dog: Destructor Called" << std::endl;
    delete brain;
}

void Dog::makeSound(void) const {
    std::cout << "wouf wouf" << std::endl;
}