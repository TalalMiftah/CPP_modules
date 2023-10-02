#include "FragTrap.hpp"

int main ()
{
    FragTrap f1("K-Dot");

    std::cout << "Hit point " << f1.getHitPoint() << " | Energy point " << f1.getEnergyPoint() << std::endl;
    f1.attack("KKK"); // hit-point 100 // energy 99 // nad this function will be the same as Clap
    std::cout << "Hit point " << f1.getHitPoint() << " | Energy point " << f1.getEnergyPoint() <<  std::endl;
    f1.takeDamage(10); // hit-point 90  // energy 99
    std::cout << "Hit point " << f1.getHitPoint() << " | Energy point " << f1.getEnergyPoint() << std::endl;
    f1.beRepaired(80); // hit-point 170 // energy 98
    std::cout << "Hit point " << f1.getHitPoint() << " | Energy point " << f1.getEnergyPoint() << std::endl;
    f1.highFivesGuys();
}