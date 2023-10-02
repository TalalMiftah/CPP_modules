#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public :
        ScavTrap(void);
        ScavTrap(ScavTrap& c);
        ScavTrap(std::string name);
        ScavTrap& operator=(const ScavTrap& s);
        ~ScavTrap(void);
        void attack(const std::string& target);
        void guardGate();
};

#endif