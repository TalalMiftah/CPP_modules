/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:37:32 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 16:37:33 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern: Default constructor called" << std::endl;
}

Intern::Intern(Intern& i) {
    std::cout << "Intern: Copy constructor called" << std::endl;
    *this = i;
}

Intern& Intern::operator=(Intern& i) {
    std::cout << "Intern: Copy assignment operator called" << std::endl;
    (void)i;
    return (*this);
}

Intern::~Intern() {
    std::cout << "Intern: Destructor called" << std::endl;
}

AForm * Intern::makeForm(std::string FormName, std::string target) {
    int i = 0;
    AForm *f;
    std::string str[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    while (i < 3 && FormName != str[i])
        i++;
    switch (i)
    {
        case 0 :
            f = new PresidentialPardonForm(target);
            std::cout << "Intern Creates " << FormName << std::endl;
            break;
        case 1 :
            f = new RobotomyRequestForm(target);
            std::cout << "Intern Creates " << FormName << std::endl;
            break;
        case 2 :
            f = new ShrubberyCreationForm(target);
            std::cout << "Intern Creates " << FormName << std::endl;
            break;
        default:
            throw InternException();
            break;
    }
    return (f);
}

const char* Intern::InternException::what() const throw() {
    return("Form Name Issue, check the Form Name please!!");
}