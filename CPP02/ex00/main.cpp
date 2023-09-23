#include "Fixed.hpp"

int main( void ) {
    Fixed a; // deault constructor
    Fixed b( a ); // in copy constructor we got copy assignement constructor so we will both messages
    Fixed c; // of course we will see the default contructor message here
    
    c = b; // copy assignement constructor

    /*
        in the copy assignement we called the getRawbit member function
        so in the final output we will see the call of the copy assignement
        and the gitRawbit() call message
    */

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}