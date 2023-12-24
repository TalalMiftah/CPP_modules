/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:36:24 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 16:36:25 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTfoRM_HPP
#define ROBOTOMYREQUESTfoRM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private: 
        std::string target;
    public:
        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm& R);
        RobotomyRequestForm& operator=(RobotomyRequestForm& R);
        ~RobotomyRequestForm();

        //****************************************//
        //       Parameterized constructor        //
        //****************************************//
        RobotomyRequestForm(std::string name);

        //****************************************//
        //          overrided function            //
        //****************************************//
        void execute(Bureaucrat const & executor) const;

        //****************************************//
        //            Nested classes              //
        //****************************************//
        class GradeNotMatch: public std::exception {
            const char *what() const throw();
        };
        class FormNotSigned: public std::exception {
            const char *what() const throw();
        };
};

#endif