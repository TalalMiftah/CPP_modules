#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    private :
        std::string name;
    public :
        DiamondTrap(void);
        ~DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap& operator=(const DiamondTrap &d);
        DiamondTrap(const DiamondTrap &d);
        void attack(const std::string &target);
        void whoAmI();
};

#endif