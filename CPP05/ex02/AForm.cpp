/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:35:44 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 19:17:23 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Talal") , gradetosign(1), gradetoexec(1) {
    std::cout << "AForm: Default constructor called" << std::endl;
    this->sign = false;
}

AForm::AForm(std::string name, int gradetosign, int gradetoexec) : name(name) ,gradetosign(gradetosign), gradetoexec(gradetoexec) {
    std::cout << "AForm: Parameterized Constructor called" << std::endl;
    this->sign = false;
    if (this->gradetoexec > 150 || this->gradetosign > 150)
        throw GradeTooLowException();
    if (this->gradetoexec < 1 || this->gradetosign < 1)
        throw GradeTooHighException();
}

AForm::~AForm() {
    std::cout << "AForm: Destructor called" << std::endl;
}

AForm& AForm::operator=(const AForm &f) {
    if (this == &f)
        return (*this);
    std::cout << "AForm: Copy Assignment operator called" << std::endl;
    this->sign = f.sign;
    return (*this);
}

AForm::AForm(const AForm &f) : name(f.getName()) , gradetosign(f.getGradeToSign()), gradetoexec(f.getGradeToExec()) {
    std::cout << "AForm: Copy constructor called" << std::endl;
    this->sign = f.sign;
}

std::ostream& operator<<(std::ostream& os, const AForm &f) {
    os << f.getName() << " Grade to Sign is " << f.getGradeToSign() << " Grade to Execute is " << f.getGradeToExec();
    return (os);
}

int AForm::getGradeToSign() const {
    return (this->gradetosign);
}

int AForm::getGradeToExec() const {
    return (this->gradetoexec);
}

const char * AForm::GradeTooHighException::what() const throw() {
    return ("grade is too high");
}

const char * AForm::GradeTooLowException::what() const throw() {
    return ("grade is too low");
}

const char * AForm::AlreadySigned::what() const throw() {
    return ("Form is already signed");
}

void AForm::beSigned(const Bureaucrat& b) {
    if (this->getSign() == true)
        throw AlreadySigned();
    if (b.getGrade() <= this->getGradeToSign())
        this->sign = true;
    else
        throw GradeTooLowException();
}

std::string AForm::getName() const {
    return (this->name);
}

bool AForm::getSign() const {
    return (this->sign);
}

void AForm::setSign(bool sign) {
    this->sign = sign;
}
