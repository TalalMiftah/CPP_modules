/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:42:13 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/22 17:30:06 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScalarConverter.hpp"

int main(int ac, char **av) {
    if (ac != 2)
        return (std::cout << "argument issue" << std::endl, 1);
    std::string str = av[1];
    ScalarConverter::convert(str);
    return 0;
}
