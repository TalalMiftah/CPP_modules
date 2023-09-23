#include "Fixed.hpp"

Fixed::Fixed(void) {
	this->fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f) {
	std::cout << "copy constructor called" << std::endl;
	*this = f;
}

Fixed& Fixed::operator=(const Fixed& f) {
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &f)
		this->fixed_point = f.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return(this->fixed_point);
}

void Fixed::setRawBits( int const raw ) {
	this->fixed_point = raw;
}
