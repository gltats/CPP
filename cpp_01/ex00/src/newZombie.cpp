/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:38:10 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/08 16:11:42 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* newZom = new Zombie(name);
	newZom->announce();
	return(newZom);
}
