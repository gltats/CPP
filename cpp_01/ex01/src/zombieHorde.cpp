/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:33:51 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/08 19:25:06 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Constructor called for Zombie:" << name << std::endl;
}

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << "Desconstructor called for Zombie:" << name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ." << std::endl;
}

Zombie* newZombie(std::string name)
{
	Zombie* newZom = new Zombie(name);
	newZom->announce();
	return(newZom);
}

Zombie* zombieHorde( int N, std::string name)
{
	Zombie* horde = new Zombie[N]; // Create an array of N Zombies
	
	for (int i = 0; i < N; i++)
	{
		std::ostringstream nameWithIndex;
		nameWithIndex << name << i + 1; // Create unique names like "foo1", "foo2", ...

		horde[i] = Zombie(nameWithIndex.str());
		// horde[i].announce();
	}
	
	return horde;
}
