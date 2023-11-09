/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:24:40 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/09 19:35:40 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanA.hpp"

//l18 : avoid potential issues related to the order of initialization 
//and ensures that the members are in a valid state as soon as the constructor is called
HumanA::HumanA(std::string name, Weapon &weapon1) : _weapon(weapon1),_name(name) 
{}

HumanA::~HumanA(){}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
