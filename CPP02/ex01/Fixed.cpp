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
		this->fixed_point = f.fixed_point;
	return (*this);
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return(this->fixed_point);
}

void Fixed::setRawBits( int const raw ) {
	this->fixed_point = raw;
}

Fixed::Fixed(const int fixed_point) {
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = fixed_point << this->fractional;
}

Fixed::Fixed(const float fixed_point) {
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = (int)roundf(fixed_point * 256);
}

std::ostream& operator<<(std::ostream& os,const Fixed& f) {
	os << f.toFloat();
	return (os);
}

int Fixed::toInt( void ) const {
	return (this->fixed_point >> this->fractional);
}

float Fixed::toFloat( void ) const {
	return (this->fixed_point / 256.0f);
}