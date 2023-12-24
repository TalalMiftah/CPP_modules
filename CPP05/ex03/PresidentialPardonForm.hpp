/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:37:55 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 16:37:56 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include  "AForm.hpp"



class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& P);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& P);
        ~PresidentialPardonForm();

        //****************************************//
        //       Parameterized constructor        //
        //****************************************//
        PresidentialPardonForm(std::string target);

        //****************************************//
        //          overrided function            //
        //****************************************//
        void execute(Bureaucrat const & executor) const;

        //****************************************//
        //            Nested classes              //
        //****************************************//
        class GradeNotMatch : public std::exception {
                const char* what() const throw();
        };
        class FormNotSigned : public std::exception {
                const char* what() const throw();
        };
};

#endif