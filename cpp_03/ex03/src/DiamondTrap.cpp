/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:53:42 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/06 14:20:15 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << GREEN << "DiamondTrap Default constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string DiamondName): ClapTrap(), ScavTrap(), FragTrap()
{
	this->ClapTrap::name = this->name + "_clap_name";
	this->HitPoints = FragTrap::getHitPoints();
	this->EnergyPoints = ScavTrap::getEnergyPoints();
	this->AttackDamage = FragTrap::getAttackDamage();
	std::cout << PINK << "DiamondTrap " << DiamondName << " appeared in the copy constructor!" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << PINK << "DiamondTrap " << DiamondName << " says goodbye! And its diamond soul has been destroyed!" << RESET << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << BLUE << "DiamondTrap name: " << this->DiamondName << ", ClapTrap name: " << FragTrap::getName() << std::endl;
}
