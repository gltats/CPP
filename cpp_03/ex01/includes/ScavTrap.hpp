/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:47:21 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/23 16:16:07 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_CLASS
#define SCAVTRAP_CLASS

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;31m"
#define ORANGE "\033[1;33m"
#define PINK "\033[1;35m"
#define BLUE "\033[1;34m"

#define RESET "\033[0m"

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		void guardGate();
	private:

};

#endif
