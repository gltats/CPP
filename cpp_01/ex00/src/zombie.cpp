/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:38:22 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/08 14:46:14 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Constructor called for Zombie:" << name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Desconstructor called for Zombie:" << name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ." << std::endl;
}

