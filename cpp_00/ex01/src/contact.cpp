/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:42:45 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/03 12:38:00 by tgomes-l         ###   ########.fr       */
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

//Function to check if a string contains only letters
bool Contact::isLettersOnly(const std::string& str) {
	if (str.empty()) {
        std::cout << "\033[0;31mThe input is empty. Please enter a valid one:\033[0m" << std::endl;
        return false;
    }
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!isalpha(*it)) {
			std::cout << "\033[0;31mIt can only contain letters. Please enter a valid one:\033[0m" << std::endl;
            return false; // Contains a non-letter character
        }
    }
    return true; // Contains only letters
}

// Function to check if a string contains only numbers
bool Contact::isNumbersOnly(const std::string& str) {
	if (str.empty()) {
        std::cout << "\033[0;31mThe input is empty. Please enter a valid one:\033[0m" << std::endl;
        return false;
    }
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!isdigit(*it)) {
			std::cout << "\033[0;31mPhone Number can only contain mumbers. Please enter a valid one:\033[0m" << std::endl;
            return false; // Contains a non-digit character
        }
    }
    return true; // Contains only digits
}

void Contact::read() {
	//FirstName
	std::cout << BLUE << "First Name:" << RESET << std::endl;
	std::getline(std::cin, FirstName);
	while (!isLettersOnly(FirstName)) {
		std::cout << BLUE << "First Name:" << RESET << std::endl;
		std::getline(std::cin, FirstName);
	}
	std::cout << PINK << "First Name:" << FirstName << RESET << std::endl;


	//Lastname
	std::cout << BLUE << "Last Name:" << RESET << std::endl;
	std::getline(std::cin, LastName);
	while (!isLettersOnly(LastName)) {
		std::cout << BLUE << "Last Name:" << RESET << std::endl;
		std::getline(std::cin, LastName);
	}
	std::cout << PINK << "Last Name:" << LastName << RESET << std::endl;


	//Nickname
	std::cout << BLUE << "Nick Name:" << RESET << std::endl;
	std::getline(std::cin, NickName);
	while (!isLettersOnly(NickName)) {
		std::cout << BLUE << "Nick Name:" << RESET << std::endl;
		std::getline(std::cin, NickName);
	}
	std::cout << PINK << "Nick Name:" << NickName << RESET << std::endl;	


	//Phonenumber
	std::cout << BLUE << "Phone Number:" << RESET << std::endl;
	std::getline(std::cin, PhoneNumber);
	while (!isNumbersOnly(PhoneNumber)) {
		std::cout << BLUE << "Phone Number:" << RESET << std::endl;
		std::getline(std::cin, PhoneNumber);
	}
	std::cout << PINK << "Phone Number:" << PhoneNumber << RESET << std::endl;	

	//Darkest Secret
	std::cout << BLUE << "Darkest Secret:" << RESET << std::endl;
	std::getline(std::cin, DarkestSecret);
	std::cout << PINK << "Darkest Secret:" << DarkestSecret << RESET << std::endl;	

	//added
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
    << std::setw(10) << index  << "|";

    // Display FirstName
    std::string truncatedFirstName = FirstName.substr(0, 9);
    if (FirstName.length() > 9) {
        truncatedFirstName += ".";
    }
    std::cout << std::setw(10) << truncatedFirstName << "|";

    // Display LastName
    std::string truncatedLastName = LastName.substr(0, 9);
    if (LastName.length() > 9) {
        truncatedLastName += ".";
    }
    std::cout << std::setw(10) << truncatedLastName << "|";

    // Display NickName
    std::string truncatedNickName = NickName.substr(0, 9);
    if (NickName.length() > 9) {
        truncatedNickName += ".";
    }
    std::cout << std::setw(10) << truncatedNickName << "|";

    std::cout << RESET << std::endl;
}

void Contact::displayOne(int index)
{
	std::cout << PINK << "Index:" << index << RESET << std::endl;
	std::cout << PINK << "First Name:" << FirstName << RESET << std::endl;
	std::cout << PINK << "Last Name:" << LastName << RESET << std::endl;
	std::cout << PINK << "Nick Name:" << NickName << RESET << std::endl;
	std::cout << PINK << "Phone Number:" << PhoneNumber << RESET << std::endl;
	std::cout << PINK << "Dark Secret:" << DarkestSecret << RESET << std::endl;
}
