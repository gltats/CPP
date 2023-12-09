/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:51:01 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/09 16:33:28 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(100, 50, 20, "Default")
{
	std::cout << GREEN << "ScavTrap Default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &scavtrap): ClapTrap(scavtrap.HitPoints, scavtrap.EnergyPoints, scavtrap.AttackDamage, scavtrap.name)
{
	std::cout << PINK << "ScavTrap " << name << " appeared in the copy constructor!" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(100, 50, 20, name)
{
	std::cout << GREEN << "ScavTrap named " << name << " called!" << RESET << std::endl;
}

//Operator overload
ScavTrap &ScavTrap::operator=(const ScavTrap &ScavTrap)
{
	if (&ScavTrap != this)
	{
		std::cout << "ScavTrap " << ScavTrap.name << " copied into " << this->name << std::endl;
		this->name = ScavTrap.name;
		this->HitPoints = ScavTrap.HitPoints;
		this->AttackDamage = ScavTrap.AttackDamage;
		this->EnergyPoints = ScavTrap.EnergyPoints;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << PINK << "ScavTrap: " << this->name << " says goodbye! And his soul has been destroyed!" << RESET << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << BLUE << "ScravTrap " << this->name << " is now in Gate keeper mode" << RESET << std::endl;
}
