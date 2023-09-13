/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:54:33 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/07 16:32:34 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>

class Contact {
	private:
		int			index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public :
		void		setIndex(int index);
		void		setFirstName(std::string firstName);
		void		setLastname(std::string lastName);
		void		setNickName(std::string nickName);
		void		setPhone(std::string phoneNumber);
		void		setDarkSecret(std::string darkestSecret);
		int			getid();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getPhoneNumber();
		std::string	getDarkSecret();
};

#endif