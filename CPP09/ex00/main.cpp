/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:08:33 by tmiftah           #+#    #+#             */
/*   Updated: 2024/01/13 12:54:49 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    if (ac != 2)
        return (std::cout << "Error: could not open file." << std::endl, 1);
    try
    {
        std::map<std::string, float> data;

        std::ifstream inputdata("data.csv");
        std::ifstream inputf(static_cast<std::string>(av[1]));
        if (!inputf || !inputdata)
            throw std::runtime_error("Error: could not open file.");
        FillMap(data, inputdata);
        execute_program(inputf, data);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}