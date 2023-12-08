/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:40:20 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/08 16:42:54 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once //helps avoid problems related to multiple inclusion of the same header file

# include <iostream>
# include <string>

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &obj);
		WrongCat & operator=(const WrongCat &obj);
		~WrongCat();
		void makeSound()const;
};
