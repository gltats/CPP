/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:52:32 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/06 12:52:34 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << GREEN << "ClapTrap constructor called, the ring is ready!" << RESET << std::endl;
}

// Copy Constructor
ClapTrap::ClapTrap(std::string name): Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << PINK << "ClapTrap " << Name << " appeared in the copy constructor!" << RESET << std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << PINK << "ClapTrap " << Name << " says goodbye! And his soul has been destroyed!" << RESET << std::endl;
}

// Member function definitions
void ClapTrap::attack(const std::string& target) 
{
	if (this->HitPoints > 0 && this->EnergyPoints > 0)
	{
		std::cout << ORANGE << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << RESET << std::endl;
		this->EnergyPoints--;
	} else {
		std::cout << RED << "ClapTrap " << this->Name << " can't attack. No hit points or energy points left." << RESET << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	if (this->HitPoints > 0)
    {
        // Ensure that the result does not go below 0
        this->HitPoints = (amount < this->HitPoints) ? this->HitPoints - amount : 0;
        std::cout << YELLOW << "ClapTrap " << this->Name << " takes " << amount << " points of damage! Current Hit Points: " << this->HitPoints << RESET << std::endl;
    }
    else
    {
        std::cout << RED << "ClapTrap " << this->Name << " has no hit points left. Can't take any more damage." << RESET << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->HitPoints > 0 && this->EnergyPoints > 0)
	{
		this->HitPoints += amount;
		std::cout << BLUE << "ClapTrap " << this->Name << " is repaired for " << amount << " points! Current Hit Points: " << this->HitPoints << RESET << std::endl;
		this->EnergyPoints--;
	} else {
		std::cout << RED << "ClapTrap " << this->Name << " can't be repaired. No hit points or energy points left." << RESET << std::endl;
	}
}

std::string ClapTrap::getName()
{
    return Name;
}
