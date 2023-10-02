#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(FragTrap &f);
        FragTrap(std::string name);
        FragTrap& operator=(const FragTrap& f);
        ~FragTrap(void);
        void highFivesGuys(void);
};

#endif