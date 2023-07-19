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

#define str_ std::string
#define Fname 1
#define Lname 2
#define Nname 3
#define Pnum 4
#define Dsecret 5

class contact {
	private:
		int			index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public :
		void	setIndex(int i) {index = i;}
		void	setFirstName(std::string firstName) {this->firstName = firstName;}
		void	setLastname(std::string lastName) {this->lastName = lastName;}
		void	setNickName(std::string nickName) {this->nickName = nickName;}
		void	setPhone(std::string phoneNumber) {this->phoneNumber = phoneNumber;}
		void	setDarkSecret(std::string darkestSecret) {this->darkestSecret = darkestSecret;}
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
		void	setFirstName (int index, str_ name) {conta_[index].setFirstName(name);}
		void	setLastName (int index, str_ lname) {conta_[index].setLastname(lname);}
		void	setNickname (int index, str_ nickname) {conta_[index].setNickName(nickname);}
		void	setPhoneNumber (int index, str_ phone) {conta_[index].setPhone(phone);}
		void	setDarkestSecret (int index, str_ Ds) {conta_[index].setDarkSecret(Ds);}
		// getters
		int		getIndex(int index) {return conta_[index].getid();}
		str_	getFirstNamePhone (int index) {conta_[index].getFirstName();}
		str_	getLastNamePhone (int index) {conta_[index].getLastName();}
		str_	getNicknamePhone (int index) {conta_[index].getNickname();}
		str_	getPhoneNumberPhone (int index) {conta_[index].getPhoneNumber();}
		str_	getDarkSecretPhone (int index) {conta_[index].getDarkSecret();}
};

#endif