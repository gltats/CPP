/* ************************************************************************** */
/*									    */
/*							:::      ::::::::   */
/*   contact.cpp					:+:      :+:    :+:   */
/*						    +:+ +:+	 +:+     */
/*   By: tgomes-l <tgomes-l@student.42wolfsburg>    +#+  +:+       +#+	*/
/*						+#+#+#+#+#+   +#+	   */
/*   Created: 2023/10/13 18:33:30 by tgomes-l	  #+#    #+#	     */
/*   Updated: 2023/10/20 23:33:07 by tgomes-l	 ###   ########.fr       */
/*									    */
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

// Function to check if a string contains only letters
bool Contact::isLettersOnly(const std::string& str) {
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!isalpha(*it)) {
            return false; // Contains a non-letter character
        }
    }
    return true; // Contains only letters
}

// Function to check if a string contains only numbers
bool Contact::isNumbersOnly(const std::string& str) {
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!isdigit(*it)) {
            return false; // Contains a non-digit character
        }
    }
    return true; // Contains only digits
}


void Contact::read() {
    std::cout << BLUE << "First name: " << RESET << std::endl;
    std::cin >> FirstName;
    while (!isLettersOnly(FirstName)) {
        std::cout << "\033[0;31mFirst name can only contain letters. Please enter a valid name:\033[0m" << std::endl;
        std::cin >> FirstName;
    }
    std::cout << PINK << "First name: " << FirstName << RESET << std::endl;
	//Lastname
    std::cout << BLUE << "Last name: " << RESET << std::endl;
    std::cin >> LastName;
    while (!isLettersOnly(LastName)) {
        std::cout << "\033[0;31mLast name can only contain letters. Please enter a valid name:\033[0m" << std::endl;
        std::cin >> LastName;
    }
    std::cout << PINK << "Last name: " << LastName << RESET << std::endl;
	//Nickname
    std::cout << BLUE << "Nickname: " << RESET << std::endl;
    std::cin >> NickName;
    while (!isLettersOnly(NickName)) {
        std::cout << "\033[0;31mNickname can only contain letters. Please enter a valid name:\033[0m" << std::endl;
        std::cin >> NickName;
    }
    std::cout << PINK << "Nickname: " << NickName << RESET << std::endl;
	//Phonenumber
    std::cout << BLUE << "Phone number: " << RESET << std::endl;
    std::cin >> PhoneNumber;
    while (!isNumbersOnly(PhoneNumber)) {
        std::cout << "\033[0;31mPhone number can only contain numbers. Please enter a valid number:\033[0m" << std::endl;
        std::cin >> PhoneNumber;
    }
    std::cout << PINK << "Phone Number: " << PhoneNumber << RESET << std::endl;
	//Darkest Secret
	std::cout << BLUE << "Darkest Secret:" << RESET << std::endl;
	std::cin >> DarkestSecret;
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
	<< std::setw(10) << index  << "|"
    << std::setw(10) << FirstName.substr(0, 10) << "|"
    << std::setw(10) << LastName.substr(0, 10) << "|" 
    << std::setw(10) << NickName.substr(0, 10) << "|" 
	<< RESET << std::endl;
}
