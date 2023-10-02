#include "ClapTrap.hpp"

int main ()
{
    ClapTrap c1("K-Dot");

    std::cout << "Hit point " << c1.getHitPoint() << " | Energy point " << c1.getEnergyPoint() << std::endl;
    c1.attack("KKK"); // hit-point 10 // energy 9
    std::cout << "Hit point " << c1.getHitPoint() << " | Energy point " << c1.getEnergyPoint() <<  std::endl;
    c1.takeDamage(9); // hit-point 1  // energy 9
    std::cout << "Hit point " << c1.getHitPoint() << " | Energy point " << c1.getEnergyPoint() << std::endl;
    c1.beRepaired(80); // hit-point 81 // energy 8
    std::cout << "Hit point " << c1.getHitPoint() << " | Energy point " << c1.getEnergyPoint() << std::endl;
}