/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:35:47 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 19:16:14 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <fstream>
# include <cstdlib>
# include <ctime>

class Bureaucrat;

class AForm
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
        AForm();
        AForm& operator=(const AForm &f);
        AForm(const AForm &f);
        virtual ~AForm();

        //****************************************//
        //       parameterized constructor        //
        //****************************************//
        AForm(std::string name, int gradetosign, int gradetoexec);

        //****************************************//
        //          Getters ans Setters           //
        //****************************************//
        int getGradeToSign() const;
        int getGradeToExec() const;
        bool getSign() const;
        std::string getName() const;
        void setSign(bool sign);

        //****************************************//
        //            Member functions            //
        //****************************************//
        void beSigned(const Bureaucrat& b);
        
        //****************************************//
        //            virtual function            //
        //****************************************//
        virtual void execute(Bureaucrat const & executor) const = 0;

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

std::ostream& operator<<(std::ostream& os, const AForm &f);

#endif