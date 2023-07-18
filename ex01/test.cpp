#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>


class contact {
	int			index;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
};

class Phonebook {
	public:
		contact contact[8];
};


// void	helpMe()
// {
	
// }

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

void	printThatShit(contact *pb)
{
	std::string substring;
	std::cout << "|-------------------------------------------|\n";
	std::cout << "|    id    |first name|last name | nickname |\n";
	std::cout << "|-------------------------------------------|\n";
	for (int i = 0; i < 8; i++)
	{
		if (pb[i].firstName[0])
		{
			std::cout << "|    " << pb[i].index << "     ";
			std::cout << "|" << print(pb[i].firstName) << "|";
			std::cout << "" << print(pb[i].lastName) << "|";
			std::cout << "" << print(pb[i].nickName) << "|\n";
			std::cout << "|-------------------------------------------|\n";
		}
	}
	
}

void	addContact(contact *pb)
{
	static int i;
	if (i == 8)
		i = 0;
	pb[i].index = i;
	std::cout << "-------------\n";
	std::cout << "first name : ";
	if (!std::getline(std::cin, pb[i].firstName))
		exit (0);
	std::cout << "last name : ";
	if (!std::getline(std::cin, pb[i].lastName))
		exit (0);
	std::cout << "nickname : ";
	if (!std::getline(std::cin, pb[i].nickName))
		exit (0);
	std::cout << "phone number : ";
	if (!std::getline(std::cin, pb[i].phoneNumber))
		exit (0);
	i++;
}

void	searchContact(contact *pb)
{
	printThatShit(pb);
}

int main ()
{
	std::string	str;
	contact pb[8];
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
			addContact(pb);
		if (str == "SEARCH")
			searchContact(pb);
	}
}