/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:21:51 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 14:48:30 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once //helps avoid problems related to multiple inclusion of the same header file

# include <iostream>
# include <string>

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog &obj);
		Dog & operator=(const Dog &obj);
		~Dog();
		void makeSound()const;
};
