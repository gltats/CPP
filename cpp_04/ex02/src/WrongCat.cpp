/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:40:18 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 16:42:16 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default " << this->type << " shows up" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	*this = obj;
	std::cout << this->type << " twin also shows up" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &obj)
{
	if (this == &obj)
		return *this;
	this->type = obj.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << this->type << " says bye" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow!!" << std::endl;
}
