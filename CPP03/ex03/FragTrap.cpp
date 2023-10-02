#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
    this->hit_point = 100;
    this->energy_point = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap : Parameterized constructor called" << std::endl;
    this->hit_point = 100;
    this->energy_point = 100;
    this->attack_damage = 30;
    this->name = name;
}

FragTrap::FragTrap(FragTrap &f) {
    std::cout << "FragTrap: copy constructor called" << std::endl;
	*this = f;
}

FragTrap& FragTrap::operator=(const FragTrap& f) {
    std::cout << "ScavTrap: copy assignment operator called" << std::endl;
	if (&f != this)
	{
        this->name = f.name;
		this->attack_damage = f.attack_damage;
		this->hit_point = f.hit_point;
		this->attack_damage = f.attack_damage;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap: " << name << " high fives guys" << std::endl;
}
