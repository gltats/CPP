/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:22:04 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/12/06 13:41:33 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap d;
	std::cout << std::endl;
	DiamondTrap a( "XD" );
	std::cout << std::endl;
	DiamondTrap b( "Alfonso" );
	std::cout << std::endl;
	d = b;
	std::cout << std::endl;
	d.attack("Me");
	std::cout << std::endl;
	a.whoAmI();
	std::cout << std::endl;

    return 0;
}
