#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>

class contact {
	public :
		int			index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
};

void	printThatShit(contact *pb)
{
	std::string substring;
	std::cout << "\n|---------------------------------------------------------------------------------------|\n";
	std::cout << "|\tindex\t|\tfirst name\t|\tlast name\t|\tnickname\t|\n";
	std::cout << "|---------------------------------------------------------------------------------------|\n";
	for (int i = 0; i < 8; i++)
	{
		if (pb[i].firstName[0])
		{
			std::cout << "|\t" << pb[i].index << "\t";
			if (pb[i].firstName.length() >= 9) {
				substring = pb[i].firstName.substr(0, 10);
				std::cout << "|\t" << substring << ".\t|";
    		}
			else
				std::cout << "|\t" << std::setw(10) << pb[i].firstName << "\t|";
			if (pb[i].lastName.length() >= 9) {
        		substring = pb[i].lastName.substr(0, 10);
				std::cout << "|\t" << substring << ".\t";
    		}
			else
				std::cout << "\t" << pb[i].lastName << "\t";
			if (pb[i].nickName.length() >= 9) {
        		substring = pb[i].nickName.substr(0, 10);
				std::cout << "|\t" << substring << ".\t|\n";
    		}
			else
				std::cout << "\t" << pb[i].nickName << "\t|\n";
			std::cout << "|---------------------------------------------------------------------------------------|\n";
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
	std::getline(std::cin, pb[i].firstName);
	std::cout << "last name : ";
	std::getline(std::cin, pb[i].lastName);
	std::cout << "nickname : ";
	std::getline(std::cin, pb[i].nickName);
	std::cout << "phone number : ";
	std::getline(std::cin, pb[i].phoneNumber);
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
		std::cout << "\n---------------------------------------------\n";
		std::cout << "Enter one of this Command ADD | SEARCH | EXIT\n";
		std::cout << "---------------------------------------------\n\n";
		std::getline(std::cin, str);
		if (str == "EXIT" || str.empty())
			exit(0);
		if (str == "ADD")
			addContact(pb);
		if (str == "SEARCH")
			searchContact(pb);
	}
}