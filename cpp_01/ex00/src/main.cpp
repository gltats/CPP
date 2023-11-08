/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:38:13 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/08 16:20:58 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	Zombie	*zombie;

	zombie = newZombie("foo");
	randomChump("randomChump");
	delete (zombie);
    return (0);
}

// This project showcases a comparison between the behavior of the randomChump function,
// which allocates zombies on the stack and destroys them immediately,
// and the newZombie function, which allocates zombies on the heap,
// potentially leaving them in memory until explicitly deallocated.