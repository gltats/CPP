/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:47:21 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/23 16:52:01 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_CLASS
#define SCAVTRAP_CLASS

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		void highFivesGuys(void);
	private:

};

#endif
