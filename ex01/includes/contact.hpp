/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:29:38 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/11/02 15:44:58 by tgomes-l         ###   ########.fr       */
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
#include <sstream> 

//pb reference variable
class Contact
{
	public:
		Contact();
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
	private:
		bool isLettersOnly(const std::string& str);
		bool isNumbersOnly(const std::string& str);
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
};

#endif
