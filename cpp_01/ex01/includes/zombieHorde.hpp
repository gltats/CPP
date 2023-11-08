/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:27:25 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/08 19:24:04 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include <sstream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void announce(void);
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif
