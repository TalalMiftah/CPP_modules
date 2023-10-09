#ifndef WRONGWrongANIMAL_HPP
# define WRONGWrongANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& Wronganimal);
        WrongAnimal& operator=(const WrongAnimal& Wronganimal);
        ~WrongAnimal();
        void makeSound(void) const;
        std::string getType() const;
};


#endif