/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:32:31 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/11 18:56:16 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::debug(void)
{	
	std::cout << BLUE << "[ DEBUG ]" << RESET << std::endl;
	std::cout << BLUE <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET << std::endl;
}

void Harl::info(void)
{
	std::cout << GREEN << "[ INFO ]" << RESET << std::endl;
	std::cout << GREEN << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << RESET << std::endl;
}

void Harl::warning(void)
{	
	std::cout << YELLOW << "[ WARNING ]" << RESET << std::endl;
	std::cout << YELLOW << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void Harl::error(void)
{
	std::cout << RED << "[ ERROR ]" << RESET << std::endl;
	std::cout << RED << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::complain(std::string level)
{
	
	std::string complain_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func_ptr_arr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	int caseLevel = -1;
    for(int i = 0; i <= 3; i++) {
        if (complain_level[i] == level)
		{
            caseLevel = i;
            break;
        }
    }
	
	switch(caseLevel)
	{
		case 0:
			(this->*(func_ptr_arr[0]))();
			std::cout << std::endl;
		case 1:
			(this->*(func_ptr_arr[1]))();
			std::cout << std::endl;
		case 2:
			(this->*(func_ptr_arr[2]))();
			std::cout << std::endl;
		case 3:
			(this->*(func_ptr_arr[3]))();
			std::cout << std::endl;
			break;
		default:
			 std::cout << PINK << "You are out of the matrix with: " << level << RESET << std::endl;
			break;
	}
}
