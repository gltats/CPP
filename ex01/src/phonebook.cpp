/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:57:29 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/02 19:20:17 by tgomes-l         ###   ########.fr       */
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
    int attempts = 0;
	 if (numContacts == 0) {
        std::cout << "No contacts in the phonebook." << std::endl;
        return (index);
    }
	displayAllContact(index);
    while (attempts < 3) {
        std::cout << "Enter the contact index:" << std::endl;
        if (!(std::cin >> index)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\033[0;31mThe input was not valid. Attempt " << attempts + 1 << " of 3 \033[0m" << std::endl;
            attempts++;
        } else if (index >= 0 && index < numContacts) {
			std::cout << "Found" << std::endl;
            contactHeader();
            displayContact(index);
            return (index);  // Exit the function with a valid index
        } else {
            std::cout << "No contact has been found" << std::endl;
            return (index);  // Exit the function with an out-of-range index
        }
    }
    if (attempts == 3) {
        std::cout << "Maximum number of attempts reached. Exiting." << std::endl;
    }
    return index;
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
