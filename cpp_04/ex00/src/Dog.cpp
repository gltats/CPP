/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:22:02 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 14:18:31 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{	
	this->type = "Dog";
	std::cout << "Default " << this->type << " shows up" << std::endl;
}

Dog::Dog(const Dog &obj): Animal()
{
	*this = obj;
	std::cout << "Dog twin also shows up" << std::endl;
}

Dog & Dog::operator=(const Dog &obj)
{
	if (this == &obj)
		return *this;
	this->type = obj.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << this->type << " says bye" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Guau Guau!!" << std::endl;
}
