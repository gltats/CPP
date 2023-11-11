/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:27:27 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/11 16:12:19 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"

int main(void)
{
	const int hordeSize = 10;
	std::string zombieBaseName = "foo";
	
	Zombie* zh = zombieHorde(hordeSize, zombieBaseName);
	
	// Use the zombie horde
	for (int i = 0; i < hordeSize; i++)
	{
		zh[i].announce();
	}
	
	delete[] zh;
	
	return 0;
}

