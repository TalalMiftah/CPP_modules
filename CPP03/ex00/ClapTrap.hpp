#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap {
    private :
        std::string name;
        int hit_point;
        int energy_point;
        int attack_damage;
    public :
        ClapTrap(void);
        ClapTrap(ClapTrap& c);
        ~ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap& operator=(const ClapTrap& c);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int getEnergyPoint(void);
        int getHitPoint(void);
        int getAttackDamage(void);
        const std::string getName(void);
};

#endif