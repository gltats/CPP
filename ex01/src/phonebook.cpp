/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:57:29 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/10/11 19:34:16 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::initialMsg()
{
	const std::string green = "\033[0;32m";
	const std::string blue = "\033[0;34m";
	const std::string reset = "\033[0m";
	
	std::cout << std::endl;
	std::cout << green << "        Welcome to PhoneBook:" << reset << std::endl;
	std::cout << green << "Please enter a command (ADD, SEARCH, EXIT):" << reset << std::endl;
	std::cout << blue << "INFO:	" << std::endl;
	std::cout << blue << "**********************************************" << reset << std::endl;
	std::cout << blue << "*    ADD: Add a user to your phonebook.      *" << reset << std::endl;
	std::cout << blue << "*  SEARCH: Search by ID in your phonebook.   *" << reset << std::endl;
	std::cout << blue << "*    EXIT: Close your phonebook.             *"<< reset << std::endl;
	std::cout << blue << "**********************************************" << reset << std::endl;

}

void PhoneBook::addContact()
{
	
}

void PhoneBook::searchContact()
{
	
}