
#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int fixed_point;
        static const int fractional = 8;
    public:
        Fixed(void);
        Fixed(const int fixed_point);
        Fixed(const float fixed_point);
        Fixed(const Fixed& f);
        Fixed& operator=(const Fixed& f);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os,const Fixed& f);

#endif