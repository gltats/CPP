/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:00:23 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/23 16:06:21 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{	
	ClapTrap clapTrapDefault;

	ClapTrap bot1 ("BotOne");
	ClapTrap bot2 ("BotTwo");
	ClapTrap bot3(bot1);

	std::cout << std::endl;
	std::cout << GREEN << "Battle: " << bot1.getName() << " vs " << bot2.getName() << RESET << std::endl;
	std::cout << std::endl;

	bot1.attack(bot2.getName());
	bot1.takeDamage(4);
	bot1.beRepaired(4);

	bot2.attack(bot1.getName());
	bot2.takeDamage(20);
	bot2.beRepaired(20);

	std::cout << std::endl;
	
    return 0;
}
