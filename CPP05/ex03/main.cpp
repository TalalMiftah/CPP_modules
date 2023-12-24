/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:37:40 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 16:45:56 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat talal("H-H", 4);
        AForm *obj;
        Intern a;
        obj = a.makeForm("presidential pardon", "talal");
        talal.signForm(*obj);
        obj->execute(talal);
        delete obj;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}