/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:05:50 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/09 16:56:20 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{	
	// ScavTrap scavTrapDefault;

	ScavTrap bot1;
	ScavTrap bot2 ("BotTwo");
	ScavTrap bot3 (bot2);
	ScavTrap bot4 ("BotOne");

	bot1 = bot4;

	std::cout << std::endl;
	std::cout << GREEN << "Battle: " << bot1.getName() << " vs " << bot3.getName() << RESET << std::endl;
	std::cout << std::endl;

	bot1.attack(bot3.getName());
	bot1.takeDamage(4);
	bot1.beRepaired(4);


	bot3.attack(bot1.getName());
	bot3.takeDamage(20);
	bot3.beRepaired(20);
	bot3.guardGate();

	std::cout << std::endl;
    return 0;
}
