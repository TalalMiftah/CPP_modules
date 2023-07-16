#include <iostream>
#include <iomanip>
#include <string>

int main ()
{
	std::string str = "talalalalalalalalalal";
	if (str.length() >= 10)
	{
        std::string substring = str.substr(0, 9);
		std::cout << substring;
		std::cout << ".";
	}
}