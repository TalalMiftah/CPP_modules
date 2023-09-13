/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:55:54 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/07 21:59:30 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void		Contact::setIndex(int index) {
    this->index = index;
}

void		Contact::setFirstName(std::string firstName) {
    this->firstName = firstName;
}

void		Contact::setLastname(std::string lastName) {
    this->lastName = lastName;
}

void		Contact::setNickName(std::string nickName) {
    this->nickName = nickName;
}

void		Contact::setPhone(std::string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void		Contact::setDarkSecret(std::string darkestSecret) {
    this->darkestSecret = darkestSecret;
}

int			Contact::getid() {
    return index;
}

std::string	Contact::getFirstName() {
    return firstName;
}

std::string	Contact::getLastName() {
    return lastName;
}

std::string	Contact::getNickname() {
    return nickName;
}

std::string	Contact::getPhoneNumber() {
    return phoneNumber;
}

std::string	Contact::getDarkSecret() {
    return darkestSecret;
}
