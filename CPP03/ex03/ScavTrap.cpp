/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:48:54 by tmiftah           #+#    #+#             */
/*   Updated: 2023/10/02 21:50:14 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	this->hit_point = 100;
	this->attack_damage = 20;
	this->energy_point = 50;
	this->name = "ScavTrap";
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& c)
{
	std::cout << "ScavTrap: copy constructor called" << std::endl;
	*this = c;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap : Parameterized constructor called" << std::endl;
	this->hit_point = 100;
	this->attack_damage = 20;
	this->energy_point = 50;
	this->name = name;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& s)
{
	std::cout << "ScavTrap: copy assignment operator called" << std::endl;
	if (&s != this)
	{
		this->attack_damage = s.attack_damage;
		this->hit_point = s.hit_point;
		this->attack_damage = s.attack_damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->energy_point <= 0 || this->hit_point <= 0)
		return ;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_point--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}