#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	this->name = "Clap";
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c) {
	std::cout << "copy constructor called" << std::endl;
	*this = c;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Parameterized constructor called" << std::endl;
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
	this->name = name;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c) {
	if (&c != this)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->name = c.name;
		this->attack_damage = c.attack_damage;
		this->hit_point = c.hit_point;
		this->attack_damage = c.attack_damage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (this->energy_point <= 0 || this->hit_point <= 0)
		return ;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_point--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hit_point <= 0 || this->energy_point <= 0 || (int)amount < 0)
		return ;
	if (this->hit_point - amount < 0)
		this->hit_point = 0;
	else
		this->hit_point -= amount;
	std::cout << "ClapTrap " << this->name << " take " << amount << " point of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energy_point <= 0 || this->hit_point <= 0 || (int)amount < 0)
		return ;
	this->hit_point += amount;
	this->energy_point--;
	std::cout << "ClapTrap " << this->name << " repaires " << amount << " of hit point" << std::endl;
}

int ClapTrap::getEnergyPoint(void) {
	return this->energy_point;
}

int ClapTrap::getHitPoint(void) {
	return this->hit_point;
}

int ClapTrap::getAttackDamage(void) {
	return this->attack_damage;
}

const std::string ClapTrap::getName(void) {
	return this->name;
}
