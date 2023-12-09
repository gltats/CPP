/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:47:45 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/09 16:32:30 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): name("Default"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << GREEN << "ClapTrap Default constructor called, the ring is ready!" << RESET << std::endl;
}

// Copy Constructor
ClapTrap::ClapTrap(const ClapTrap &claptrap): name(claptrap.name), HitPoints(claptrap.HitPoints), EnergyPoints(claptrap.EnergyPoints), AttackDamage(claptrap.AttackDamage)
{
	std::cout << PINK << "ClapTrap " << claptrap.name << " appeared in the copy constructor!" << RESET << std::endl;
}

ClapTrap::ClapTrap(unsigned int HitPoints, unsigned int EnergyPoints, unsigned int AttackDamage, std::string name): name(name), HitPoints(HitPoints), EnergyPoints(EnergyPoints), AttackDamage(AttackDamage)
{
	std::cout << GREEN << "ClapTrap BASE named " << name << " constructor called!" << RESET << std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << PINK << "ClapTrap " << this->name << " says goodbye! And his soul has been destroyed!" << RESET << std::endl;
}

//Operator overload
ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	if (&claptrap != this)
	{
		std::cout << "ClapTrap " << claptrap.name << " copied into " << this->name << std::endl;
		this->name = claptrap.name;
		this->HitPoints = claptrap.HitPoints;
		this->AttackDamage = claptrap.AttackDamage;
		this->HitPoints = claptrap.EnergyPoints;
	}
	return (*this);
}



ClapTrap::ClapTrap(std::string name): name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << GREEN << "ClapTrap named " << name << " called!" << RESET << std::endl;
}

// Member function definitions
void ClapTrap::attack(const std::string& target) 
{

	if(this->HitPoints <= 0)
	{
		std::cout << RED << "ClapTrap " << this->name << " can't attack. No hit points or energy points left!" << RESET << std::endl;
	} else {
		for(int i = 0; i < static_cast<int>(this->AttackDamage); i++)
		{
			if(this->EnergyPoints <= 0)
			{
				std::cout << ORANGE << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage! But he no has none left" << RESET << std::endl;
			}
			this->EnergyPoints--;
		}
		std::cout << ORANGE << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << RESET << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	for (int i = 0; i < (int)amount; i++)
	{
		if (this->HitPoints <= 0)
		{
        	std::cout << RED << "ClapTrap " << this->name << " has no hit points left. Can't take " << amount << " damage." << RESET << std::endl;
			return;
		}
		this->HitPoints--;
	}
    std::cout << YELLOW << "ClapTrap " << this->name << " takes " << amount << " points of damage! Current Hit Points: " << this->HitPoints << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	
	for (int i = 0; i < (int)amount; i++)
	{
		if (this->EnergyPoints <= 0)
		{
			std::cout << RED << "ClapTrap " << this->name << " is repaired with " << amount << " points! But no Energy Points left" << RESET << std::endl;
			return;
		}
		this->HitPoints++;
		this->EnergyPoints--;
	}
	std::cout << BLUE << "ClapTrap " << this->name << " is repaired with " << amount << " points! Current Energy Points: " << this->EnergyPoints << RESET << std::endl;
	
}

std::string ClapTrap::getName()
{
    return name;
}
