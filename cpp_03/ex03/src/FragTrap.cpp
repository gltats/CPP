/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:53:03 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/06 14:18:18 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << GREEN << "FragTrap Default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->Name = name; 
	this->HitPoints = 100; 
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << PINK << "FragTrap" << Name << " appeared in the copy constructor!" << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << PINK << "FragTrap " << Name << " says goodbye! And his soul has been destroyed!" << RESET << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << GREEN << "FragTrap " << this->Name << "High Five" << RESET << std::endl;
}

int FragTrap::getAttackDamage( void )
{
	return (30);
}

int FragTrap::getHitPoints( void )
{
	return (100);
}
