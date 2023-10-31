/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:33:24 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/10/31 16:38:10 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#define GREEN "\033[0;32m"
#define PINK "\033[0;35m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"

#include "contact.hpp"
#include <iostream>
#include <limits>

class PhoneBook {
public:
	PhoneBook();  // Constructor
    void initialMsg();
    int searchContact(int index);
	void addContact();
    // void addContact(const Contact& contact);
	void displayContact(int index);
    int getNumContacts() const;
    void deleteOldestAndAddAtIndexZero();
    void displayAllContact(int index);
private:
    void contactHeader();
    static const int maxContacts = 8; // Define the maximum number of contacts
    Contact contacts[maxContacts];
    int numContacts; // Track the number of contacts in the array
	// int iterator; //add scheme

};


#endif
