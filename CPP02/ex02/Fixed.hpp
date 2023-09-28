/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:45:08 by tmiftah           #+#    #+#             */
/*   Updated: 2023/09/27 01:56:07 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int fixed_point;
        static const int fractional;
    public:
        Fixed(void);
        Fixed(const int fixed_point);
        Fixed(const float fixed_point);
        Fixed(const Fixed& f);
        Fixed& operator=(const Fixed& f);
        ~Fixed();
        
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        Fixed operator*(const Fixed& f) const;
        Fixed operator-(const Fixed& f) const;
        Fixed operator+(const Fixed& f) const;
        Fixed operator/(const Fixed& f) const;
        
        bool operator>(const Fixed& f) const;
        bool operator<(const Fixed& f) const;
        bool operator<=(const Fixed& f) const;
        bool operator>=(const Fixed& f) const;
        bool operator==(const Fixed& f) const;
        bool operator!=(const Fixed& f) const;
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);
        static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
        static Fixed& max (Fixed& fixed1, Fixed& fixed2);
        static Fixed& min (Fixed& fixed1, Fixed& fixed2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif