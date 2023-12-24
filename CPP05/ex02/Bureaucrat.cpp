/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:35:51 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 16:35:52 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Bureaucrat"), grade(1) {
	std::cout << "Bureaucrat: Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& b) : name(b.getName()), grade(b.getGrade()){
	std::cout << "Bureaucrat: Copy constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name){
	std::cout << "Bureaucrat: Parameterized Constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b) {
	std::cout << "Bureaucrat: Copy assignment operator called" << std::endl;
	this->grade = b.getGrade();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
	os << b.getName() << ",  bureaucrat grade " << b.getGrade();
	return (os);
}

Bureaucrat::~Bureaucrat(void) {
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
	return ("Bureaucrat: grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Bureaucrat: grade is too low");
}

void Bureaucrat::signForm(AForm& f) {
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << this->getName() << " couldn't sign " << f.getName() << " Because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) {
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " error: " << e.what() << std::endl;
	}   
}