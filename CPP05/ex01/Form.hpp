/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:35:30 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 19:14:03 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        const int gradetosign;
        const int gradetoexec;
        bool sign;
    public:
        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        Form();
        Form& operator=(const Form &f);
        Form(const Form &f);
        ~Form();

        //****************************************//
        //       Parameterized constructor        //
        //****************************************//
        Form(std::string name, int gradetosign, int gradetoexec);

        //****************************************//
        //          Getters And Setters           //
        //****************************************//
        int getGradeToSign() const;
        int getGradeToExec() const;
        bool getSign() const;
        std::string getName() const;

        //****************************************//
        //            Member functions            //
        //****************************************//
        void beSigned(const Bureaucrat& b);

        //****************************************//
        //             Nested Classes             //
        //****************************************//
        class GradeTooHighException : public std::exception {
            const char* what() const throw();
        };
        class GradeTooLowException  : public std::exception {
            const char* what() const throw();
        };
        class AlreadySigned  : public std::exception {
            const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Form &f);

#endif