/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:34:49 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/10/11 19:33:53 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


int main()
{
	PhoneBook phoneBook;
    std::string command;

	phoneBook.initialMsg();
	while(true)
	{
		std::cin >> command;
		if(command == "EXIT")
			break;
		else if(command == "SEARCH")
			searchContact(phoneBook);
		else if(command == "ADD")
			addContact(phoneBook);		
		else
			std::cout << "\033[0;31m*Please enter a valid command, in Capital Letters (ADD, SEARCH, EXIT):\n \033[0m";
	}

	return(0);
}
