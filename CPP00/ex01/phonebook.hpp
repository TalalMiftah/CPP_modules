/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:02:05 by tmiftah           #+#    #+#             */
/*   Updated: 2023/08/31 16:25:47 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contact[8];
	public:
		void		setIndex (int index, int i);
		void		setFirstName (int index, std::string firstName);
		void		setLastName (int index, std::string lastName);
		void		setNickname (int index, std::string nickName);
		void		setPhoneNumber (int index, std::string phoneNumber);
		void		setDarkestSecret (int index, std::string darkSecret);
		int			getIndex(int index);
		std::string	getFirstNamePhone (int index);
		std::string	getLastNamePhone (int index);
		std::string	getNicknamePhone (int index);
		std::string	getPhoneNumber (int index);
		std::string	getDarkSecretPhone (int index);
};

#endif