/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:33:24 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/02 21:46:47 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "DiamondTrap: Default contructor called" << std::endl;
	this->name = "DiamondTrap";
	ClapTrap::name = this->name + "_clap_name";
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 30;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	std::cout << "DiamondTrap: Parameterized constructor called" << std::endl;
	this->name = name;
	ClapTrap::name = this->name + "_clap_name";
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 30;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &d) {
	std::cout << "ScavTrap: copy assignment operator called" << std::endl;
	if (&d != this)
	{
		ClapTrap::name = d.name + "_clap_name";
		this->attack_damage = d.attack_damage;
		this->hit_point = d.hit_point;
		this->attack_damage = d.attack_damage;
	}
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &d) {
	std::cout << "DiamondTrap: copy constructor called" << std::endl;
	*this = d;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "Diamond name : " << this->name << " | Clap name : " << ClapTrap::name << std::endl;
}