/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:31:34 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/13 16:01:04 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
    std::string filename;
    std::string s1;
    std::string s2;
    if (ac != 4)
        return (std::cout << "argument" << std::endl, 1);
    filename = av[1];
    s1 = av[2];
    s2 = av[3];
    if (fun(filename, s1, s2))
        return (1);
}