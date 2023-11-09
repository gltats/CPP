/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:24:35 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/09 19:36:27 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "weapon.hpp"

class HumanA
{
	private:
		Weapon &_weapon;
		std::string _name;
	public:
		HumanA(std::string name, Weapon &weapon1);
		~HumanA();
		void attack();
};

#endif
