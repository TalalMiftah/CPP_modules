/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:35:54 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 16:35:55 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:

        //****************************************//
        //        Orthodox Canonical Form         //
        //****************************************//
        Bureaucrat(void); // default constructor
        Bureaucrat& operator=(const Bureaucrat& b); // copy assignment operator
        Bureaucrat(const Bureaucrat& b); // copy constructor
        ~Bureaucrat(void); // destructor

        //****************************************//
        //                getters                 //
        //****************************************//
        int getGrade() const;
        std::string getName() const;

        //****************************************//
        //       parameterized constructor        //
        //****************************************//
        Bureaucrat(const std::string& name, int grade); // prameterized constructor

        //****************************************//
        //          Getters ans Setters           //
        //****************************************//
        void increment();
        void decrement();
        void signForm(AForm& f);
        void executeForm(AForm const & form);

        //****************************************//
        //             Nested Classes             //
        //****************************************//
        class GradeTooHighException : public std::exception {
            const char* what() const throw();
        };
        class GradeTooLowException  : public std::exception {
            const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif