/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:57:29 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/10/20 15:57:57 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
	: numContacts(0)
{
	// for (int i = 0; maxContacts > i; i++) {
	// 	contacts[i].reset();
	// }
}

void PhoneBook::initialMsg()
{
	std::cout << std::endl;
	std::cout << GREEN << "        Welcome to PhoneBook:" << RESET << std::endl;
	std::cout << GREEN << "Please enter a command (ADD, SEARCH, EXIT):" << RESET << std::endl;
	std::cout << BLUE << "INFO:	" << std::endl;
	std::cout << BLUE << "**********************************************" << RESET << std::endl;
	std::cout << BLUE << "*    ADD: Add a user to your phonebook.      *" << RESET << std::endl;
	std::cout << BLUE << "*  SEARCH: Search by ID in your phonebook.   *" << RESET << std::endl;
	std::cout << BLUE << "*    EXIT: Close your phonebook.             *"<< RESET << std::endl;
	std::cout << BLUE << "**********************************************" << RESET << std::endl;

}

void PhoneBook::contactHeader()
{
	std::cout << BLUE << std::setw(5) <<"AGENDA:" << RESET << std::endl;
	std::cout << BLUE 
	<< std::setw(5) 
	<< std::string(40, '-') 
	<< "|"
	<< RESET << std::endl;
    std::cout << BLUE 
	<<  "|"
	<< std::setw(5) << "Index" << "|"
    << std::setw(10) << "FirstName" << "|"
    << std::setw(10) << "LastName" << "|" 
    << std::setw(10) << "NickName" <<  "|"
	<< std::endl;
}	

void PhoneBook::displayContact(int index)
{
	std::cout << BLUE <<  "|";
	contacts[index].display(index);
}

void PhoneBook::addContact()
{
	if (numContacts < maxContacts) {
        contacts[numContacts].read();
        numContacts++;
	}
}

void PhoneBook::searchContact(int index)
{
	// numContacts;
    if (index >= 0 && index < numContacts) 
	{
		contactHeader();
        displayContact(index);
		PhoneBook::initialMsg();
    } 
	else 
	{
        std::cout << "No contact has been found\n";
		PhoneBook::initialMsg();
    }
}
