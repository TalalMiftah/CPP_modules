/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 08:35:59 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/31 15:24:26 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

template<typename T>
void easyfind(T &a, int searched_value) {
    typename T::iterator i = std::find(a.begin(), a.end(), searched_value);
    if (i != a.end())
        std::cout << " exist" << std::endl;
    else
        std::cout << "not exist" << std::endl;
}

#endif