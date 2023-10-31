/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:57:29 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/10/31 16:38:34 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
	: numContacts(0)
{}

void PhoneBook::initialMsg()
{
	std::cout << std::endl;
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
	std::cout << PINK << "AGENDA:" << RESET << std::endl;
	std::cout << BLUE 
	<< "|" << std::string(43, '-') << "|" << RESET << std::endl;
    std::cout << BLUE 
	<<  "|"
	<< std::setw(10) << "Index" << "|"
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

void PhoneBook::displayAllContact(int index)
{
	contactHeader();
	while(index < numContacts)
	{
		std::cout << BLUE <<  "|";
		contacts[index].display(index);
		index++;
	}
	
}

void PhoneBook::addContact()
{
	if (numContacts < maxContacts) {
        contacts[numContacts].read();
        numContacts++;
	}
}

int PhoneBook::searchContact(int index) {
    if (index >= 0 && index < numContacts) {
        if (numContacts <= 8) {
            contactHeader();
            displayContact(index);
        } else {
            for (int i = 0; i < numContacts - 1; i++) {
                contacts[i] = contacts[i + 1];
            } 
            contacts[7].reset(); 
            contacts[0] = contacts[index];
            numContacts = 8;

            contactHeader();
            displayContact(0);
        }
        initialMsg();
    } else {
        std::cout << "No contact has been found" << std::endl;
        initialMsg();
    }
	return(index);
}

int PhoneBook::getNumContacts() const {
    return numContacts;
}

void PhoneBook::deleteOldestAndAddAtIndexZero() {
    if (numContacts == maxContacts) {
        // Delete the oldest contact by shifting all contacts one position forward
        for (int i = 0; i < numContacts - 1; i++) {
            contacts[i] = contacts[i + 1];
        }
        numContacts--; // Decrement the count of contacts to maintain the limit of maxContacts
    }
    // Add the new contact at index 0
    Contact newContact;
    newContact.read();
    contacts[numContacts] = newContact;
    numContacts++;
}
