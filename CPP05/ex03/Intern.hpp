/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:37:36 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 16:37:37 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    public:
        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        Intern();
        Intern(Intern& i);
        Intern& operator=(Intern& i);
        ~Intern();

        //****************************************//
        //            Member  function            //
        //****************************************//
        AForm * makeForm(std::string FormName, std::string target);
  
        //****************************************//
        //             Nested  Classe             //
        //****************************************//
        class InternException : public std::exception {
                const char* what() const throw();
        };
};
