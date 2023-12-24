/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:35:11 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 16:35:12 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("talal", 1);
        std::cout << a << std::endl;
        a.decrement();
        a.decrement();
        a.decrement();
        a.decrement();
        a.decrement();
        std::cout << a.getName() << " grade " << a.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "===============================>\n";

    try
    {
        Bureaucrat e("talal", 150);
        std::cout<< e << std::endl;

        e.decrement();
        std::cout<< e << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
