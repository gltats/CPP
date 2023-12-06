/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:05:50 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/06 12:40:47 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{	
	FragTrap FragTrapDefault;

	FragTrap bot1 ("BotOne");
	FragTrap bot2 ("BotTwo");

	std::cout << std::endl;
	std::cout << GREEN << "Battle: " << bot1.getName() << " vs " << bot2.getName() << RESET << std::endl;
	std::cout << std::endl;

	bot1.attack(bot2.getName());
	bot1.takeDamage(4);
	bot1.beRepaired(4);


	bot2.attack(bot1.getName());
	bot2.takeDamage(20);
	bot2.beRepaired(20);
	bot2.highFivesGuys();

	std::cout << std::endl;
	
    return 0;
}
