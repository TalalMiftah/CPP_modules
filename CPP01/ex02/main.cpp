#include <iostream>

int main ()
{
    std:: string str = "HI THIS IS BRAIN";
    std:: string *stringPTR = &str;
    std:: string& stringREF = str;
    std:: cout << "The memory address of the string variable is:\t" << &str << std::endl;
    std:: cout << "The memory address held by stringPTR is:\t" << stringPTR << std::endl;
    std:: cout << "The memory address held by stringREF is:\t" << &stringREF << std::endl;
    std:: cout << "The value of the string variable is:\t\t" << str << std::endl;
    std:: cout << "The value pointed to by stringPTR is:\t\t" << *stringPTR << std::endl;
    std:: cout << "The value pointed to by stringREF is:\t\t" << stringREF << std::endl;
}
