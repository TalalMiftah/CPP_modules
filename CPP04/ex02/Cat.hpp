#ifndef CAT_HPP
#define CAT_HPP

# include <iostream> 
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat(void);
        Cat(const Cat& cat);
        Cat& operator=(const Cat& cat);
        ~Cat(void);
        void makeSound(void) const;
        void setType(std::string type);
};

#endif
