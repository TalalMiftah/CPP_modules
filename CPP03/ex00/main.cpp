#include "ClapTrap.hpp"

int main ()
{
    ClapTrap c1;
    ClapTrap c2;

    c1 = ClapTrap("dave");
    c2 = ClapTrap("cj");
    c1.takeDamage(5);
    std::cout << "attack damage " << c1.getAttackDamage() << std::endl;
    std::cout << "energy point " << c1.getEnergyPoint() << std::endl;
    std::cout << "hit point " << c1.getHitPoint() << std::endl;
    c1.takeDamage(5);
    std::cout << "attack damage " << c1.getAttackDamage() << std::endl;
    std::cout << "energy point " << c1.getEnergyPoint() << std::endl;
    std::cout << "hit point " << c1.getHitPoint() << std::endl;
    c1.beRepaired(100);
    std::cout << "attack damage " << c1.getAttackDamage() << std::endl;
    std::cout << "energy point " << c1.getEnergyPoint() << std::endl;
    std::cout << "hit point " << c1.getHitPoint() << std::endl;
    c1.attack(c2.getName());
}