/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:49:18 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/23 16:53:52 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << GREEN << "FragTrap Default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << PINK << "FragTrap " << Name << " appeared in the copy constructor!" << RESET << std::endl;
	this->Name = name; 
	this->HitPoints = 100; 
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

ScavTrap::~ScavTrap()
{
	std::cout << PINK << "FragTrap " << Name << " says goodbye! And his soul has been destroyed!" << RESET << std::endl;
}

void ScavTrap::highFivesGuys(void)
{
	std::cout << BLUE << "FragTrap " << this->Name << " says high five" << RESET << std::endl;
}
