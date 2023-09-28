/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:45:03 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/27 02:09:12 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed(void) : fixed_point(0) {
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
	this->fixed_point = f.fixed_point;
	return (*this);
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return(this->fixed_point);
}

void Fixed::setRawBits( int const raw ) { this->fixed_point = raw; }

Fixed::Fixed(const int fixed_point) {
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = fixed_point << this->fractional;
}

Fixed::Fixed(const float fixed_point) {
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = (int)roundf(fixed_point * (1 << this->fractional));
}

std::ostream& operator<<(std::ostream& os,const Fixed& f) {
	os << f.toFloat();
	return (os);
}

int Fixed::toInt( void ) const {
	return (this->fixed_point >> this->fractional);
}

float Fixed::toFloat( void ) const {
	return (this->fixed_point / (float)(1 << this->fractional));
}

Fixed Fixed::operator*(const Fixed& f) const {
	return (Fixed((this->fixed_point / (float)(1 << this->fractional)) * (f.fixed_point / (float)(1 << this->fractional))));
}

Fixed Fixed::operator-(const Fixed& f) const {
	return (Fixed((this->fixed_point - f.fixed_point) / (float)(1 << this->fractional)));
}

Fixed Fixed::operator+(const Fixed& f) const {
	return (Fixed((this->fixed_point + f.fixed_point) / (float)(1 << this->fractional)));
}

Fixed Fixed::operator/(const Fixed& f) const {
	return (Fixed((this->fixed_point / (float)(1 << this->fractional)) / (f.fixed_point / (float)(1 << this->fractional))));
}

bool Fixed::operator>(const Fixed& f) const {
	return (f.fixed_point < this->fixed_point);
}

bool Fixed::operator<(const Fixed& f) const {
	return (f.fixed_point > this->fixed_point);
}

bool Fixed::operator<=(const Fixed& f) const {
	return (this->fixed_point <= f.fixed_point);
}

bool Fixed::operator>=(const Fixed& f) const {
	return (this->fixed_point >= f.fixed_point);
}

bool Fixed::operator!=(const Fixed& f) const {
	return (f.fixed_point != this->fixed_point);
}

bool Fixed::operator==(const Fixed& f) const {
	return (f.fixed_point == this->fixed_point);
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2) {
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2) {
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2) {
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2) {
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed& Fixed::operator++() {
	this->fixed_point++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed f = *this;
	this->fixed_point++;
	return (f);
}

Fixed& Fixed::operator--() {
	this->fixed_point--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed f = *this;
	this->fixed_point--;
	return (f);
}
