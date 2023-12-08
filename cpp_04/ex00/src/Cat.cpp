/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:21:59 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 14:49:07 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default " << this->type << " shows up" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	*this = obj;
	std::cout << this->type << " twin also shows up" << std::endl;
}

Cat & Cat::operator=(const Cat &obj)
{
	if (this == &obj)
		return *this;
	this->type = obj.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << this->type << " says bye" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miau Miau!!" << std::endl;
}
