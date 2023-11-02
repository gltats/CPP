/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:34:49 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/02 19:32:33 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main() {
    PhoneBook phoneBook;
    std::string command;

    std::cout << GREEN << std::setw(5) << "Welcome to PhoneBook for IT people:" << RESET << std::endl;
    phoneBook.initialMsg();

    while (true) {
        std::getline(std::cin, command);
		int index = 0;
        if (command == "EXIT")
            break;
        else if (command == "ADD") {
			if (phoneBook.getNumContacts() >= 8) {
   				std::cout << "More than 8 contacts. Older ones are deleted, and a new one is added at index 7." << std::endl;
				phoneBook.deleteOldestAndAddAtIndexZero();
				phoneBook.addContact();
				phoneBook.initialMsg();
			} else {
				phoneBook.addContact();
           		phoneBook.initialMsg();
			}
		} else if (command == "SEARCH") 
		{
			phoneBook.searchContact(index);
			phoneBook.initialMsg();
        } else {
            std::cout << "\033[0;31m*Please enter a valid command, in Capital Letters (ADD, SEARCH, EXIT):\n \033[0m";
        }
    }

    return 0;
}
