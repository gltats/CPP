/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:24:37 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/09 19:40:17 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanB.hpp"

//l18 : avoid potential issues related to the order of initialization 
//and ensures that the members are in a valid state as soon as the constructor is called
HumanB::HumanB(std::string name) : _name(name) 
{}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
