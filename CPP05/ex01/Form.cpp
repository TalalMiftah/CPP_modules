/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:35:27 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 19:15:45 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Talal") , gradetosign(1), gradetoexec(1) {
    std::cout << "Form: Default constructor called" << std::endl;
    this->sign = false;
}

Form::Form(std::string name, int gradetosign, int gradetoexec) : name(name) ,gradetosign(gradetosign), gradetoexec(gradetoexec) {
    std::cout << "Form: Parameterized Constructor called" << std::endl;
    this->sign = false;
    if (this->gradetoexec > 150 || this->gradetosign > 150)
        throw GradeTooLowException();
    if (this->gradetoexec < 1 || this->gradetosign < 1)
        throw GradeTooLowException();
}

Form::~Form() {
    std::cout << "Destructor called" << std::endl;
}

Form& Form::operator=(const Form &f) {
    std::cout << "Form: Copy Assignment operator called" << std::endl;
    this->sign = f.sign;
    return (*this);
}

Form::Form(const Form &f) : name(f.getName()) , gradetosign(f.getGradeToSign()), gradetoexec(f.getGradeToExec()) {
    std::cout << "Form: Copy constructor called" << std::endl;
    this->sign = f.sign;
}

std::ostream& operator<<(std::ostream& os, const Form &f) {
    os << "Grade to Sign is " << f.getGradeToSign() << " Grade to Execute is " << f.getGradeToExec();
    return (os);
}

int Form::getGradeToSign() const {
    return (this->gradetosign);
}

int Form::getGradeToExec() const {
    return (this->gradetoexec);
}

bool Form::getSign() const {
    return (this->sign);
}

std::string Form::getName() const {
    return (this->name);
}

void Form::beSigned(const Bureaucrat& b) {
    if (this->getSign() == true)
        throw AlreadySigned();
    if (b.getGrade() <= this->getGradeToSign())
        this->sign = true;
    else
        throw GradeTooLowException();
}

const char * Form::GradeTooHighException::what() const throw() {
    return ("grade is too high");
}

const char * Form::GradeTooLowException::what() const throw() {
    return ("grade is too low");
}

const char * Form::AlreadySigned::what() const throw() {
    return ("Form is already signed");
}
