/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:36:00 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 19:30:18 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat e("Talal", 45);
        Bureaucrat e1("Talal1", 45);
        AForm *f = new RobotomyRequestForm("Talal");
        std::cout << *f << std::endl;
        e.signForm(*f);
        e1.signForm(*f);
        f->execute(e);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
