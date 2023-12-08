/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:21:59 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 19:31:54 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	brain = new Brain;
	std::cout << "Default " << this->type << " shows up" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	*this = obj;
	brain = new Brain;
	std::cout << this->type << " twin also shows up" << std::endl;
}

Cat & Cat::operator=(const Cat &obj)
{
	if (this == &obj)
		return *this;
	this->type = obj.type;
	*brain = *obj.brain;
	return *this;
}

Cat::~Cat()
{
	std::cout << this->type << " says bye" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Miau Miau!!" << std::endl;
}

std::string Cat::getIdea( int i )
{
	std::cout << "Idea " << i << " is: " << brain->getIdea( i ) << std::endl;
	return brain->getIdea( i );
}

void Cat::setIdea( size_t i, std::string idea )
{
	if ( i >= 100 )
	{
		std::cout << "Full memorie" << std::endl;
		return;
	}
	brain->setIdea( i, idea );
}
