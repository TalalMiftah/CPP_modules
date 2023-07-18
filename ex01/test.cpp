#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>

#define str_ std::string
#define Fname 1
#define Lname 2
#define Nname 3
#define Pnum 4

class contact {
	private:
		int			index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
	public :
		void	setindex(int i) {
			index = i;
		}
		void	setfn(str_ name) {
			firstName = name;
		}
		void	setlastn(str_ lname) {
			lastName = lname;
		}
		void	setnickn(str_ nname) {
			nickName = nname;
		}
		void	setPhone(str_ phone) {
			phoneNumber = phone;
		}
		str_	getContactinfo(int macro) {
			if (macro == 1)
				return firstName;
			if (macro == 2)
				return lastName;
			if (macro == 3)
				return nickName;
			if (macro == 4)
				return phoneNumber;
			return NULL;
		}
		int		getid() {
			return index;
		}
};

class Phonebook {
	public:
		contact conta_[8];
		void	setindex (int index, int i) {
			conta_[index].setindex(i);
		}
		void	setFirstName (int index, str_ name) {
			conta_[index].setfn(name);
		}
		void	setLastName (int index, str_ lname) {
			conta_[index].setlastn(lname);
		}
		void	setnickname (int index, str_ nickname) {
			conta_[index].setnickn(nickname);
		}
		void	setPhoneNumber (int index, str_ phone) {
			conta_[index].setPhone(phone);
		}
		str_	getContact (int index, int macro) {
			return conta_[index].getContactinfo(macro);
		}
		int		getIndex(int index) {
			return conta_[index].getid();
		}
};


// void	helpMe()
// {
	
// }

std::string	print(str_ str)
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
			std::cout << "|" << print(pb->getContact(i, 1)) << "|";
			std::cout << "" << print(pb->getContact(i, 2)) << "|";
			std::cout << "" << print(pb->getContact(i, 3)) << "|\n";
			std::cout << "|-------------------------------------------|\n";
		}
	}
	
}

int	chechPhoneNumber(str_ phone)
{
	int i = 0;

	while (phone[i])
	{
		if (isdigit(phone[i]))
			return (1);
		i++;
	}
	return (0);
}

void	addContact(Phonebook *pb)
{
	static int i;
	str_ tmp;
	if (i == 8)
		i = 0;
	pb->setindex(i, i);
	std::cout << "-------------\n";
	std::cout << "first name : ";
	if (!std::getline(std::cin, tmp))
		exit (0);
	pb->setFirstName(i, tmp);
	std::cout << "last name : ";
	if (!std::getline(std::cin, tmp))
		exit (0);
	pb->setLastName(i, tmp);
	std::cout << "nickname : ";
	if (!std::getline(std::cin, tmp))
		exit (0);
	pb->setnickname(i, tmp);
	std::cout << "phone number : ";
	if (!std::getline(std::cin, tmp))
		exit (0);
	if (!chechPhoneNumber(tmp))
		pb->setPhoneNumber(i, tmp);
	i++;
}

void	searchContact(Phonebook *pb)
{
	printThatShit(pb);
}

int main ()
{
	str_		str;
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
			searchContact(&pb);
	}
}