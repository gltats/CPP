/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:47:29 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/23 16:25:27 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS
#define CLAPTRAP_CLASS

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;31m"
#define ORANGE "\033[1;33m"
#define PINK "\033[1;35m"
#define BLUE "\033[1;34m"

#define RESET "\033[0m"

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName();
	protected:
		std::string Name;
		unsigned int HitPoints;
		unsigned int EnergyPoints;
		unsigned int AttackDamage;
};

#endif
