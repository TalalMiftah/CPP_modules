/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:02:05 by tmiftah           #+#    #+#             */
/*   Updated: 2023/07/19 08:12:42 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>

class contact {
	private:
		int			index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public :
		//setters
		void	setIndex(int i) {index = i;}
		void	setFirstName(std::string firstName) {this->firstName = firstName;}
		void	setLastname(std::string lastName) {this->lastName = lastName;}
		void	setNickName(std::string nickName) {this->nickName = nickName;}
		void	setPhone(std::string phoneNumber) {this->phoneNumber = phoneNumber;}
		void	setDarkSecret(std::string darkestSecret) {this->darkestSecret = darkestSecret;}
		// getters
		int			getid() {return index;}
		std::string	getFirstName() {return firstName;}
		std::string	getLastName() {return lastName;}
		std::string	getNickname() {return nickName;}
		std::string	getPhoneNumber() {return phoneNumber;}
		std::string	getDarkSecret() {return darkestSecret;}
};

class Phonebook {
	public:
		contact conta_[8];
		//setters
		void	setindex (int index, int i) {conta_[index].setIndex(i);}
		void	setFirstName (int index, std::string firstName) {conta_[index].setFirstName(firstName);}
		void	setLastName (int index, std::string lastName) {conta_[index].setLastname(lastName);}
		void	setNickname (int index, std::string nickName) {conta_[index].setNickName(nickName);}
		void	setPhoneNumber (int index, std::string phoneNumber) {conta_[index].setPhone(phoneNumber);}
		void	setDarkestSecret (int index, std::string darkSecret) {conta_[index].setDarkSecret(darkSecret);}
		// getters
		int		getIndex(int index) {return conta_[index].getid();}
		std::string	getFirstNamePhone (int index) {return conta_[index].getFirstName();}
		std::string	getLastNamePhone (int index) {return conta_[index].getLastName();}
		std::string	getNicknamePhone (int index) {return conta_[index].getNickname();}
		std::string	getPhoneNumberPhone (int index) {return conta_[index].getPhoneNumber();}
		std::string	getDarkSecretPhone (int index) {return conta_[index].getDarkSecret();}
};

#endif