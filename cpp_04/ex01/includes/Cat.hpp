/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:21:49 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 19:05:36 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once //helps avoid problems related to multiple inclusion of the same header file

# include <iostream>
# include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &obj);
		Cat & operator=(const Cat &obj);
		~Cat();
		void makeSound()const;
		std::string	getIdea( int i );
		void setIdea( size_t i, std::string idea );
		
};
