/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:32:57 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/13 12:33:27 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain( std::string level ) {
    int i = 0;
    void (Harl::*tab[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (i < 4 && level != str[i])
        i++;
    if (i < 4)
        (this->*tab[i])();
} 

void   Harl::debug( void ) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void   Harl::info( void ) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void   Harl::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "think I deserve to have some extra bacon for free." << std::endl << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void   Harl::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
    return ;
}

Harl::~Harl()
{
    return ;
}
