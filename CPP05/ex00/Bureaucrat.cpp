/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:35:04 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 16:50:12 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Noname"), grade(1) { // default constructor
    std::cout << "Bureaucrat: Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& b) : name(b.getName()), grade(b.getGrade()) { // copy constructor
    std::cout << "Bureaucrat: Copy constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) { // parameterized constructor
    std::cout << "Bureaucrat: parameterized constructor called" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b) { // copy assignment operator
    std::cout << "Bureaucrat: Copy assignment operator called" << std::endl;
    this->grade = b.getGrade();
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) { // copy assignment operator
    os << b.getName() << ",  bureaucrat grade " << b.getGrade();
    return (os);
}

Bureaucrat::~Bureaucrat(void) { // destructor
    std::cout << "Bureaucrat: Destructor called" << std::endl;
}

int Bureaucrat::getGrade() const {
    return (this->grade);
}

std::string Bureaucrat::getName() const{
    return (this->name);
}

void Bureaucrat::increment() {
    this->grade--;
    if (this->grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::decrement() {
    this->grade++;
    if (this->grade > 150)
        throw GradeTooLowException();
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
    return ("grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return ("grade is too low");
}
