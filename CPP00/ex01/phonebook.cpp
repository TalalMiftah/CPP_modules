/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:01:04 by tmiftah           #+#    #+#             */
/*   Updated: 2023/07/19 08:15:14 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	print(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str += ".";
	}
	else
		str.resize(10 , ' ');
	return (str);
}

void	printThatShit(Phonebook *pb)
{
	std::string substring;
	std::cout << "|-------------------------------------------|\n";
	std::cout << "|    id    |first name|last name | nickname |\n";
	std::cout << "|-------------------------------------------|\n";
	for (int i = 0; i < 8; i++)
	{
		if (pb->getContact(i, 1)[0])
		{
			std::cout << "|    " << pb->getIndex(i) << "     ";
			std::cout << "|" << print(pb.) << "|";
			std::cout << "" << print(pb->getContact(i, 2)) << "|";
			std::cout << "" << print(pb->getContact(i, 3)) << "|\n";
			std::cout << "|-------------------------------------------|\n";
		}
	}
	
}

int	chechNumbers(std::string phone)
{
	int i = 0;

	while (phone[i])
	{
		if (!isdigit(phone[i]))
			return (1);
		i++;
	}
	return (0);
}

void	addContact(Phonebook *pb)
{
	static int i;
	std::string tmp;
	if (i == 8)
		i = 0;
	pb->setindex(i, i);
	std::cout << "-------------\n";
	do {
		std::cout << "first name : ";
		if (!std::getline(std::cin, tmp))
			exit (0);
	} while (!tmp[0]);
	pb->setFirstName(i, tmp);
	do {
		std::cout << "last name : ";
		if (!std::getline(std::cin, tmp))
			exit (0);
	} while (!tmp[0]);
	pb->setLastName(i, tmp);
	do
	{
		std::cout << "nickname : ";
		if (!std::getline(std::cin, tmp))
			exit (0);
	} while (!tmp[0]);
	pb->setNickname(i, tmp);
	do
	{
		std::cout << "phone number : ";
		if (!std::getline(std::cin, tmp))
			exit (0);
	} while (!tmp[0] || chechNumbers(tmp));
	pb->setPhoneNumber(i, tmp);
	do
	{
		std::cout << "Darkest secret : ";
		if (!std::getline(std::cin, tmp))
			exit (0);
	} while (!tmp[0]);
	pb->setDarkestSecret(i, tmp);
	i++;
}

void	displayAll(int i, Phonebook *pb)
{
	if ((i >= 0 && i <= 7) && pb->getContact(i)[0])
	{
		// std::cout << "Index : " << pb->getIndex(i) << std::endl;
		// std::cout << "First name : " << pb->getContact(i) << std::endl;
		// std::cout << "Last name : " << pb->getContact(i) << std::endl;
		// std::cout << "Nickname : " << pb->getContact(i) << std::endl;
		// std::cout << "Phone Number : " << pb->getContact(i) << std::endl;
		// std::cout << "Darkest secret : " << pb->getContact(i) << std::endl;
	}
	else
		std::cout << "\033[1m" << "There is no one with this id in this contact" << "\033[0m" << std::endl;
}

int main ()
{
	std::string		str;
	Phonebook	pb;

	while (1)
	{
		std::cout << "---------------------------------------------\n";
		std::cout << "Enter one of this Command ADD | SEARCH | EXIT\n";
		std::cout << "---------------------------------------------\n";
		if (!std::getline(std::cin, str))
			exit(0);
		if (str == "EXIT" || str.empty())
			exit(0);
		if (str == "ADD")
			addContact(&pb);
		if (str == "SEARCH")
			printThatShit(&pb);
		if (!chechNumbers(str))
			displayAll(std::stoi(str), &pb);
	}
}