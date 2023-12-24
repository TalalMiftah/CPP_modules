/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:36:28 by tmiftah           #+#    #+#             */
/*   Updated: 2023/12/17 16:36:29 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation", 145, 137) {
    std::cout << "Default Constructor Called" << std::endl;
    this->setSign(false);
    this->target = "ShrubberyCreationForm";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& S) : AForm("shrubbery creation", S.getGradeToSign(), S.getGradeToExec()) {
    std::cout << "Copy Constructor Called" << std::endl;
    this->target = S.target;
    this->setSign(S.getSign());
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& S) {
    std::cout << "Copy Assignment operator Called" << std::endl;
    this->target = S.target;
    this->setSign(S.getSign());
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "Destructor Called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (!this->getSign())
        throw FormNotSigned();
    if (executor.getGrade() > this->getGradeToExec())
        throw GradeNotMatch();
    std::ofstream of(target + "_shrubbery");
    if (!of.is_open())
    {
        std::cerr << "the file cannot opened" << std::endl;
        return ;
    }
    of << "                  .     .  .      +     .      .          ." << std::endl;
    of << "     .       .      .     #       .           ." << std::endl;
    of << "        .      .         ###            .      .      ." << std::endl;
    of << "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
    of << "          .      . \"####\"###\"####\"  ." << std::endl ;
    of << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
    of << "  .             \"#########\"#########\"        .        ." << std::endl;
    of << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
    of << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
    of << "                .\"##\"#####\"#####\"##\"           .      ." << std::endl;
    of << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
    of << "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
    of << "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
    of << "            .     \"      000      \"    .     ." << std::endl;
    of << "       .         .   .   000     .        .       ." << std::endl;
    of << ".. .. ..................O000O........................ ......" << std::endl;
    of.close();
}

const char* ShrubberyCreationForm::GradeNotMatch::what() const throw() {
    return("The Grade not match the grade required to execute");
}

const char* ShrubberyCreationForm::FormNotSigned::what() const throw() {
    return("The Form is not signed");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm("shrubbery creation", 145, 137) {
    this->target = name;
}
