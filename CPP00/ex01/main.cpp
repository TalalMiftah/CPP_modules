/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:55:21 by tmiftah           #+#    #+#             */
/*   Updated: 2023/08/31 16:36:18 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string		print(std::string str);
void			printThatShit(PhoneBook *pb);
int				checkNumbers(std::string phone);
void			addContact(PhoneBook *pb);
void			displayAll(int i, PhoneBook *pb);

std::string	print(std::string str)
{
	int	i;

	i = str.length();
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str += ".";
		std::cout << str;
	}
	else
	{
		i = 10 - i;
		std::cout << str;
		while (i > 0)
		{
			std::cout << " ";
			i--;
		}
	}
	return (str);
}

void	printThatShit(PhoneBook *pb)
{
	std::string substring;
	std::string str;
	std::cout << "|-------------------------------------------|\n";
	std::cout << "|    id    |first name|last name | nickname |\n";
	std::cout << "|-------------------------------------------|\n";
	for (int i = 0; i < 8; i++)
	{
		if (pb->getFirstNamePhone(i)[0])
		{
			std::cout << "|    " << pb->getIndex(i) << "     ";
			std::cout << "|";
			print(pb->getFirstNamePhone(i));
			std::cout << "|";
			print(pb->getLastNamePhone(i));
			std::cout << "|";
			print(pb->getNicknamePhone(i));
			std::cout << "|\n";
			std::cout << "|-------------------------------------------|\n";
		}
	}
	std::cout << "index => ";
	std::getline(std::cin, str);
	if (!checkNumbers(str))
		displayAll(std::stoi(str), pb);
}

int	checkNumbers(std::string phone)
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

void	addContact(PhoneBook *pb)
{
	static int	i;
	std::string	fname;
	std::string	lname;
	std::string	nname;
	std::string	pnumber;
	std::string	dsecret;
	if (i == 8)
		i = 0;
	std::cout << "-------------\n";
	std::cout << "first name : ";
	if (!std::getline(std::cin, fname))
		exit (0);
	std::cout << "last name : ";
	if (!std::getline(std::cin, lname))
		exit (0);
	std::cout << "nickname : ";
	if (!std::getline(std::cin, nname))
		exit (0);
	std::cout << "phone number : ";
	if (!std::getline(std::cin, pnumber))
		exit (0);
	std::cout << "Darkest secret : ";
	if (!std::getline(std::cin, dsecret))
		exit (0);
	if (!fname.empty() && !lname.empty() && !nname.empty() && !pnumber.empty() && !dsecret.empty() && !checkNumbers(pnumber))
	{
		pb->setIndex(i, i);
		pb->setFirstName(i, fname);
		pb->setLastName(i, lname);
		pb->setNickname(i, nname);
		pb->setPhoneNumber(i, pnumber);
		pb->setDarkestSecret(i, dsecret);
		i++;
	}
}

void	displayAll(int i, PhoneBook *pb)
{
	if ((i >= 0 && i <= 7) && pb->getFirstNamePhone(i)[0])
	{
		std::cout << "Index : " << pb->getIndex(i) << std::endl;
		std::cout << "First name : " << pb->getFirstNamePhone(i) << std::endl;
		std::cout << "Last name : " << pb->getLastNamePhone(i) << std::endl;
		std::cout << "Nickname : " << pb->getNicknamePhone(i) << std::endl;
		std::cout << "Phone Number : " << pb->getPhoneNumber(i) << std::endl;
		std::cout << "Darkest secret : " << pb->getDarkSecretPhone(i) << std::endl;
	}
	else
		std::cout << "\033[1m" << "There is no one with this id in this contact" << "\033[0m" << std::endl;
}

int main ()
{
	std::string		str;
	PhoneBook	pb;

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
	}
}
