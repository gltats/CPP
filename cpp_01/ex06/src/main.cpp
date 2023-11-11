/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:32:28 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/11 18:47:43 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./harl.hpp"

int main(int argc, char **argv)
{
	Harl Harl;
	std::string input;
	
	if(argc == 2)
	{
		input = argv[1];
		Harl.complain(input);
		return(0);
		
	}
	else
	{
		std::cout << RED << "Please check your input" << RESET << std::endl;
		std::cout << RED << "Choose only one: DEBUG, INFO, WARNING, ERROR" << RESET << std::endl;
		std::cout << YELLOW << "Example:" << argv[0] << " DEBUG" << RESET << std::endl;
	}
	return(0);
}
