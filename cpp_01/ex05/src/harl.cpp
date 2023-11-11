/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:32:31 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/11 18:27:27 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::debug(void)
{
	std::cout << BLUE <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET << std::endl;
}

void Harl::info(void)
{
	std::cout << GREEN << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << RESET << std::endl;
}

void Harl::warning(void)
{
	std::cout << YELLOW << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void Harl::error(void)
{
	std::cout << RED << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::complain(std::string level)
{
	
	std::string complain_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func_ptr_arr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

   

    for(int i = 0; i < 4; i++) {
        if (level == complain_level[i])
		{
            (this->*func_ptr_arr[i])();
            return;
        }
    }

    std::cout << "You are out of the matrix" << level << std::endl;
}
