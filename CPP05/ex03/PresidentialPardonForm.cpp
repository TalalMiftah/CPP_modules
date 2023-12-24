/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:37:52 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 16:37:53 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential pardon", 25, 5) { // done
    std::cout << "PresidentialPardonForm: default constructor called" << std::endl;
    this->target = "PresidentialPardonForm";
    this->setSign(false);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& P) : AForm(P.getName(), P.getGradeToSign(), P.getGradeToExec()){
    std::cout << "PresidentialPardonForm: Copy constructor called" << std::endl;
    this->setSign(P.getSign()); // done
    this->target = P.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& P) {
    std::cout << "PresidentialPardonForm: Copy assignment operator called" << std::endl;
    this->setSign(P.getSign()); //done
    this->target = P.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm: destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (executor.getGrade() > this->getGradeToExec())
        throw GradeNotMatch(); //done
    if (!this->getSign())
        throw FormNotSigned();
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const char* PresidentialPardonForm::GradeNotMatch::what() const throw() {
    return ("PresidentialPardonForm: The Grade not match the grade required to execute");
}

const char* PresidentialPardonForm::FormNotSigned::what() const throw() {
    return ("PresidentialPardonForm: The Form is not signed");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidential pardon", 25, 5) {
    std::cout << "PresidentialPardonForm: Parameterized constructor called" << std::endl;
    this->target = target; //done
    this->setSign(false);
}
