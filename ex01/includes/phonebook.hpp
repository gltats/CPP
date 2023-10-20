/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:33:24 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/10/15 21:22:45 by tgomes-l         ###   ########.fr       */
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

class PhoneBook {
public:
	PhoneBook();  // Constructor
    void initialMsg();
    void searchContact(int index);
	void addContact();
    // void addContact(const Contact& contact);
	void displayContact(int index);
private:
    void contactHeader();
    static const int maxContacts = 8; // Define the maximum number of contacts
    Contact contacts[maxContacts];
    int numContacts; // Track the number of contacts in the array
	// int iterator; //add scheme

};


#endif
