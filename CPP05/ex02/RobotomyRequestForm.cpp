/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:36:21 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 16:36:22 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request", 72, 45) {
    std::cout << "RobotomyRequestForm: Default constructor called" << std::endl;
    this->setSign(false);
    this->target = "RobotomyRequestForm";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& R) : AForm("robotomy request", R.getGradeToSign(), R.getGradeToExec()) {
    std::cout << "RobotomyRequestForm: copy constructor called" << std::endl;
    this->setSign(R.getSign());
    this->target = R.target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm("robotomy request", 72, 45){
    std::cout << "RobotomyRequestForm: Parameterized constructor called" << std::endl;
    this->setSign(false);
    this->target = name;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& R) {
    std::cout << "RobotomyRequestForm: copy assignment operator called" << std::endl;
    this->setSign(R.getSign());
    this->target = R.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm: destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (!this->getSign())
        throw FormNotSigned();
    if (executor.getGrade() > this->getGradeToExec())
        throw GradeNotMatch();
    int x = std::time(0);
    srand(x);
    if (rand() % 2 == 0)
    {
        std::cout << this->getName() << " Drill sound" << std::endl;
        std::cout << this->target << " has been robotomized." << std::endl;
    }
    else
        std::cout <<"the robotomy failed." << std::endl;
}

const char *RobotomyRequestForm::FormNotSigned::what() const throw() {
    return ("RobotomyRequestForm: Form Not Signed");
}

const char *RobotomyRequestForm::GradeNotMatch::what() const throw() {
    return ("RobotomyRequestForm: Grade of your bureaucrat is too low to execute");
}