/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:16:22 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/07 21:59:34 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void		PhoneBook::setIndex (int index, int i) {
    this->contact[index].setIndex(i);
}

void		PhoneBook::setFirstName (int index, std::string firstName) {
    this->contact[index].setFirstName(firstName);
}

void		PhoneBook::setLastName (int index, std::string lastName) {
    this->contact[index].setLastname(lastName);
}

void		PhoneBook::setNickname (int index, std::string nickName) {
    this->contact[index].setNickName(nickName);
}

void		PhoneBook::setPhoneNumber (int index, std::string phoneNumber) {
    this->contact[index].setPhone(phoneNumber);
}

void		PhoneBook::setDarkestSecret (int index, std::string darkSecret) {
    this->contact[index].setDarkSecret(darkSecret);
}

int			PhoneBook::getIndex(int index) {
    return this->contact[index].getid();
}

std::string	PhoneBook::getFirstNamePhone (int index) {
    return this->contact[index].getFirstName();
}

std::string	PhoneBook::getLastNamePhone (int index) {
    return this->contact[index].getLastName();
}

std::string	PhoneBook::getNicknamePhone (int index) {
    return this->contact[index].getNickname();
}

std::string	PhoneBook::getPhoneNumber (int index) {
    return this->contact[index].getPhoneNumber();
}

std::string	PhoneBook::getDarkSecretPhone (int index) {
    return this->contact[index].getDarkSecret();
}
