/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:21:57 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 16:47:08 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Default " << this->type << " shows up" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
	std::cout << this->type << " twin also shows up" << std::endl;
}

Animal & Animal::operator=(const Animal &obj)
{
	if (this == &obj)
		return *this;
	this->type = obj.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << this->type << " says bye" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "The animal just made a sound" << std::endl;
}
