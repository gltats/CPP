/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:24:46 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/09 19:35:41 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

Weapon::Weapon()
{}

Weapon::~Weapon()
{}

Weapon::Weapon(std::string name)
{
	this->type = name;
}

const std::string Weapon::getType()
{
	return(this->type);
}

void Weapon::setType(std::string name)
{
	this->type = name;
}
