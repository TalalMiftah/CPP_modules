
#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

class Fixed
{
    private:
        int fixed_point;
        static const int fractional = 8;
    public:
        Fixed(void);
        Fixed(const Fixed& f);
        Fixed& operator=(const Fixed& f);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};


#endif