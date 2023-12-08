/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:21:43 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 20:31:18 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//viartual: designed to be used as a base class

#pragma once //helps avoid problems related to multiple inclusion of the same header file

# include <iostream>
# include <string>

class Animal
{
	protected://Can be access by the class and it derivates
		std::string type;

	public:
		Animal();
		Animal(const Animal &obj);
		Animal &operator=(const Animal &obj);
		virtual ~Animal(); // it's anticipating that derived classes may be instantiated
							// and destroyed through pointers to the base class
		std::string getType()const;
		virtual void makeSound()const = 0;
};
