/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:33:30 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/10/20 20:01:46 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() {}

void Contact::reset() {
	FirstName.clear();
	LastName.clear();
	NickName.clear();
	PhoneNumber.clear();
	DarkestSecret.clear();
}

void Contact::read()
{
	std::cout << BLUE << "First name:" << RESET << std::endl;
	std::cin >> FirstName;
	std::cout << PINK << "First name:" << FirstName << RESET << std::endl;
	
	std::cout << BLUE << "Last name:" << RESET << std::endl;
	std::cin >> LastName;
	std::cout << PINK << "Last name:" << LastName << RESET << std::endl;
	
	std::cout << BLUE << "Nickname:" << RESET << std::endl;
	std::cin >> NickName;
	std::cout << PINK << "Nickname:" << NickName << RESET << std::endl;

	std::cout << BLUE << "Phone number:" << RESET << std::endl;
	std::cin >> PhoneNumber;
	std::cout << PINK << "Phone Number:" << PhoneNumber << RESET << std::endl;
	
	std::cout << BLUE << "Darkest Secret:" << RESET << std::endl;
	std::cin >> DarkestSecret;
	std::cout << PINK << "Darkest Secret:" << DarkestSecret << RESET << std::endl;

	std::cout << BLUE << "****Contact has been added****" << RESET << std::endl;
}

void Contact::display(int index)
{
	std::cout << BLUE 
	<< std::setw(5)
	<< std::string(43, '-') << "|"
	<< RESET << std::endl;
    std::cout << BLUE
	<<  "|"
	<< std::setw(10) << index  << "|"
    << std::setw(10) << FirstName.substr(0, 10) << "|"
    << std::setw(10) << LastName.substr(0, 10) << "|" 
    << std::setw(10) << NickName.substr(0, 10) << "|" 
	<< RESET << std::endl;
}
