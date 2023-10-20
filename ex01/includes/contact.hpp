/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42wolfsburg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:29:38 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/10/20 23:38:17 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#define GREEN "\033[0;32m"
#define PINK "\033[0;35m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"

#include <iostream>
#include <iomanip>
#include <ctype.h>

//pb reference variable
class Contact
{
	public:
		Contact();
		// Contact(PhoneBook* pb); 
		void read();
		void set(
			const std::string &first_name,
			const std::string &last_name,
			const std::string &nick,
			const std::string &phone_number,
			const std::string &darkest_secret
		);

		void reset();
		void display(int index);
		
		// void displayContact(int index);
		//setters and getters
		// void setFirstName(std::string name);
		// std::string getFirstName();
		// void setLastName(std::string name);
		// std::string getLastName();
		// void setNickName(std::string name);
		// std::string getNickName();
		// void setPhoneNumber(std::string name);
		// std::string getPhoneNumber();
		// void setDarkestSecret(std::string name);
		// std::string getDarkestSecret();
	private:
		// PhoneBook* phoneBook;
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
};

#endif
