#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hit_point(10), energy_point(10), attack_damage(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& c) {
	std::cout << "copy constructor called" << std::endl;
	*this = c;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c) {
	std::cout << "copy assignment operator called" << std::endl;
	if (&c != this)
	{
		this->attack_damage = c.attack_damage;
		this->hit_point = c.hit_point;
		this->attack_damage = c.attack_damage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (!this->energy_point)
		return ;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hit_point <= 0 || !this->energy_point)
		return ;
	if (this->hit_point - amount < 0)
		this->hit_point = 0;
	else
		this->hit_point -= amount;
	this->energy_point--;
	this->attack_damage += amount;
	std::cout << "ClapTrap " << this->name << " take " << this->attack_damage << " point of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!this->energy_point)
		return ;
	this->hit_point += amount;
	this->energy_point--;
	std::cout << "ClapTrap " << this->name << " repaires " << amount << " of hit point" << std::endl;
}

int ClapTrap::getEnergyPoint(void) {
	return this->energy_point ;
}

int ClapTrap::getHitPoint(void) {
	return this->hit_point ;
}

int ClapTrap::getAttackDamage(void) {
	return this->attack_damage ;
}

const std::string ClapTrap::getName(void) {
	return this->name ;
}
