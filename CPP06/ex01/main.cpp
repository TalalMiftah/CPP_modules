/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:42:28 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/22 17:32:08 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main () {
    uintptr_t ptr;
    Data * d1;
    Data * d = new Data;
    d->d = 15;
    d->c = 'a';
    d->str = "talal";

    ptr = Serializer::serialize(d);
    std::cout << ptr << std::endl;
    std::cout << d << std::endl;
    d1 = Serializer::deserialize(ptr);
    std::cout << d1 << std::endl;
    std::cout << "========= values =========" << std::endl;
    std::cout << d1->d << std::endl;
    std::cout << d1->c << std::endl;
    std::cout << d1->str << std::endl;
    delete d;
}