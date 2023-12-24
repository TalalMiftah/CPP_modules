/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:36:32 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 16:36:33 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATION_HPP
#define SHRUBBERYCREATION_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& S);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& S);
        ~ShrubberyCreationForm();

        //****************************************//
        //       Parameterized constructor        //
        //****************************************//
        ShrubberyCreationForm(std::string name);

        //****************************************//
        //          overrided function            //
        //****************************************//
        void execute(Bureaucrat const & executor) const;

        //****************************************//
        //            Nested classes              //
        //****************************************//
        class GradeNotMatch : public std::exception {
            const char *what() const throw();
        };
        class FormNotSigned : public std::exception {
            const char *what() const throw();
        };
};

#endif