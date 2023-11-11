/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:32:33 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/11 18:17:01 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define GREEN   "\033[1;32m"

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif
