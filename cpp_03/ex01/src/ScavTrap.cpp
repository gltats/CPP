/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:51:01 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/23 16:35:43 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << GREEN << "ScavTrap Default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->Name = name; 
	this->HitPoints = 100; 
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << PINK << "ScavTrap " << Name << " appeared in the copy constructor!" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << PINK << "ScavTrap " << Name << " says goodbye! And his soul has been destroyed!" << RESET << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << BLUE << "ScravTrap " << this->Name << " is now in Gate keeper mode" << RESET << std::endl;
}