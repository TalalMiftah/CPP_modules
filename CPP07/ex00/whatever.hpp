/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 14:29:08 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/24 14:29:09 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>
void swap(T& a, T& b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T& max(T& va1, T& va2) {
    return ((va1 <= va2) ? va2 : va1);
}

template<typename T>
T& min(T& va1, T& va2) {
    return ((va1 >= va2) ? va2 : va1);
}

#endif