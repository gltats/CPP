/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:22:02 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 19:32:16 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{	
	this->type = "Dog";
	brain = new Brain;
	std::cout << "Default " << this->type << " shows up" << std::endl;
}

Dog::Dog(const Dog &obj): Animal()
{
	*this = obj;
	brain = new Brain;
	std::cout << "Dog twin also shows up" << std::endl;
}

Dog & Dog::operator=(const Dog &obj)
{
	if (this == &obj)
		return *this;
	this->type = obj.type;
	*brain = *obj.brain;
	return *this;
}

Dog::~Dog()
{
	std::cout << this->type << " says bye" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Guau Guau!!" << std::endl;
}

std::string Dog::getIdea( int i )
{
	std::cout << "Idea " << i << " is: " << brain->getIdea( i ) << std::endl;
	return brain->getIdea( i );
}

void Dog::setIdea( size_t i, std::string idea )
{
	if ( i >= 100 )
	{
		std::cout << "Full memorie" << std::endl;
		return;
	}
	brain->setIdea( i, idea );
}
