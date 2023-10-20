/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:34:49 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/10/20 19:55:44 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


int main()
{
	PhoneBook phoneBook;
    std::string command;
	std::cout << GREEN << std::setw(5) << "Welcome to PhoneBook:" << RESET << std::endl;
	phoneBook.initialMsg();
	while(true)
	{
		std::cin >> command;
		if(command == "EXIT")
			break;
		else if(command == "SEARCH")
		{
			int index = 1;
			int attempts = 0;
			//display all contacts till 8
			while (attempts < 3) {
			    std::cout << "Enter the contact index:" << std::endl;
			
			    if (!(std::cin >> index)) {
			        std::cin.clear();  // Clear the fail flag
			        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
			        std::cout << "\033[0;31mThe input was not valid. Number of " << attempts + 1 << " of 3 \033[0m" << std::endl;
			        attempts++;
			    } else {
			        phoneBook.searchContact(index);
			        break;
			    }
			}
			if (attempts == 3) {
			    std::cout << "Maximum number of attempts reached. Exiting." << std::endl;
				phoneBook.initialMsg();
			}
		}
		else if(command == "ADD")
		{
			
			phoneBook.addContact();
			phoneBook.initialMsg();
		}
		else
			std::cout << "\033[0;31m*Please enter a valid command, in Capital Letters (ADD, SEARCH, EXIT):\n \033[0m";
	}

	return(0);
}


