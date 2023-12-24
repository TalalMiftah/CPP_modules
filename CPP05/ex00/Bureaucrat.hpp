/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:35:07 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 16:35:08 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include <string>

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
        Bureaucrat(const std::string& name, int grade); // copy constructor
        ~Bureaucrat(void); // destructor

        //****************************************//
        //          Getters And Setters           //
        //****************************************//
        int getGrade() const;
        std::string getName() const;

        //****************************************//
        //            Member functions            //
        //****************************************//
        void increment();
        void decrement();

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