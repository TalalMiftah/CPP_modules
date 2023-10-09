#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include <iostream> 
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(const WrongCat& Wrongcat);
        WrongCat& operator=(const WrongCat& Wrongcat);
        ~WrongCat(void);
        void makeSound(void) const;
};

#endif
