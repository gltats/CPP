/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:49:18 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/09 16:50:31 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(100, 100, 30, "Default")
{
	std::cout << GREEN << "FragTrap Default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap( const FragTrap &Fragtrap): ClapTrap(Fragtrap.HitPoints, Fragtrap.EnergyPoints, Fragtrap.AttackDamage, Fragtrap.name)
{
	std::cout << PINK << "FragTrap " << name << " appeared in the copy constructor!" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(100, 100, 30, name)
{
	std::cout << GREEN << "FragTrap named " << name << " called!" << RESET << std::endl;
}

//Operator overload
FragTrap &FragTrap::operator=(const FragTrap &FragTrap)
{
	if (&FragTrap != this)
	{
		std::cout << "FragTrap " << FragTrap.name << " copied into " << this->name << std::endl;
		this->name = FragTrap.name;
		this->HitPoints = FragTrap.HitPoints;
		this->AttackDamage = FragTrap.AttackDamage;
		this->EnergyPoints = FragTrap.EnergyPoints;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << PINK << "FragTrap: " << this->name << " says goodbye! And his soul has been destroyed!" << RESET << std::endl;
}


void	FragTrap::highFivesGuys(void)
{
	std::cout << GREEN << "FragTrap " << this->name << "✋High Five✋" << RESET << std::endl;
}
