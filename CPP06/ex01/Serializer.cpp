/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:42:32 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/22 16:42:33 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
    std::cout << "Default Constructor called" << std::endl;
}

Serializer::~Serializer() {
    std::cout << "Destructor called" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr) {
    uintptr_t intptr;
    intptr = reinterpret_cast<uintptr_t>(ptr);
    return (intptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
    Data *dataptr;
    dataptr = reinterpret_cast<Data *>(raw);
    return (dataptr);
}
