/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:05:50 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/23 16:55:16 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// int main(void)
// {	
// 	ScavTrap scavTrapDefault;

// 	ClapTrap bot1 ("BotOne");
// 	ClapTrap bot2 ("BotTwo");
// 	ScavTrap bot3 ("BotScav");

// 	std::cout << std::endl;
// 	std::cout << GREEN << "Battle: " << bot1.getName() << " vs " << bot2.getName() << RESET << std::endl;
// 	std::cout << std::endl;

// 	bot1.attack(bot2.getName());
// 	bot1.takeDamage(4);
// 	bot1.beRepaired(4);


// 	bot3.attack(bot1.getName());
// 	bot3.takeDamage(20);
// 	bot3.beRepaired(20);
// 	bot3.guardGate();

// 	std::cout << std::endl;
	
//     return 0;
// }

int main ()
{
    FragTrap B ("BotOne");//obj B is created
    FragTrap C ("foo");//obj C is created
    
    B.attack("BotOne");
    B.takeDamage(7);
    B.beRepaired(4);
    std::cout << "/*****************/" << std::endl;
    C.attack("BotTwo");
    C.takeDamage(20);
    C.beRepaired(20);
    C.highFivesGuys();
}
