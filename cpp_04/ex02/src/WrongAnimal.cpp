/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:34:44 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 16:54:56 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << "Default " << this->type << " shows up" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	*this = obj;
	std::cout << this->type << " twin also shows up" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this == &obj)
		return *this;
	this->type = obj.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->type << " says bye" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "The animal just made a sound" << std::endl;
}
