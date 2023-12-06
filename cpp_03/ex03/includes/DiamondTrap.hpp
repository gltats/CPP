/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:54:25 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/06 14:07:51 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS
#define DIAMONDTRAP_CLASS

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;31m"
#define ORANGE "\033[1;33m"
#define PINK "\033[1;35m"
#define BLUE "\033[1;34m"

#define RESET "\033[0m"

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

// class that has access to and combines features from both FragTrap and ScavTrap
class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string name);
		void whoAmI(void);
	private:
		std::string DiamondName;
};

#endif
